#!/usr/bin/env python3
#!coding=utf-8

import numpy as np
import cv2
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import json
import os
import sys
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from std_msgs.msg import String


class Calligraphy_Node(Node):
    def __init__(self):
        super().__init__('calligraphy_talker')
        self.pub = self.create_publisher(Float64MultiArray, 'arm_strokes', 10)
        self.WORD_DIR = '/home/ubuntu/ws_ros2/src/moveit2/moveit_demo_nodes/run_move_group/character_data/'
        self.strings = "桃之夭夭 灼灼其华 之子于归 宜其室家".split(" ")

    # Get all strokes of all the characters in the specified string
    def get_all_points(self, start_pos, words="千山鸟飞绝", axis="1"):
        words_strokes = self.get_words(words)
        new_words_strokes = []
        if axis == "1":
            h = start_pos[1]
            w = start_pos[0]
            w_id = 0
            for word_id in range(0, len(words)):
                h = h - 1024
                if words[word_id] == "X":
                    continue
                word = words_strokes[w_id]
                w_id = w_id + 1
                
                new_word = []
                for stroke in word:
                    new_word.append(stroke + np.array([w, h]))
                new_words_strokes.append(new_word)
        if axis == "-":
            pass
        return new_words_strokes

    # Get strokes of every Chinese character in strings
    def get_words(self, words="千山鸟飞绝"):
        all_word_strokes = []
        for i in range(len(words)):
            word = words[i]
            if word == "X":
                continue
            word_strokes = self.get_word_strokes(word)
            all_word_strokes.append(word_strokes)
        return all_word_strokes
    
    # Get strokes of one character
    def get_word_strokes(self, word):
        word_strokes = []
        with open(self.WORD_DIR + word+'.json', encoding='utf-8') as f:
            res = f.read()
            res = json.loads(res)
            medians = np.array(res['medians'])
            for s in medians:
                word_strokes.append(np.array(s))
        return word_strokes

    # Project the strokes on the virtual plane onto the actual writing plane, where the arm will be operating
    def get_arm_strokes(self, words_strokes, center_point):

        # Create the transformation matrix between the virtual plane and the actual writing plane
        center_x, center_y, center_z = center_point[0], center_point[1], center_point[2]
        w = 0.1
        dst = np.float32([[center_x-w, center_y+w], 
                        [center_x+w, center_y+w],
                        [center_x+w, center_y-w]
                        ])
        src = np.float32([[0, 0], [0,1024*5], [1024*4, 1024*5]])
        T_img2arm = cv2.getAffineTransform(src, dst)

        # Map every character onto the actual writing plane
        arm_strokes = []
        for word_id in range(0, len(words_strokes)):
            word = words_strokes[word_id]
            new_word = []
            
            # Map every stroke of the selected character on the virtual plane onto the actual writing plane of the arm
            for stroke in word:
                stroke_ = stroke.reshape(-1, 2)
                ones_ = np.ones([len(stroke_), 1])
                stroke_ = np.hstack([stroke_, ones_]).T

                # Map the stroke onto the actual writing plane using the transformation matrix
                arm_stroke_ = np.matmul(T_img2arm, stroke_).T.reshape(-1, 2)

                # Add z parameter to the actual writing plane
                x_y = np.array(arm_stroke_).reshape(-1, 2)
                z = np.ones((len(x_y), 1)) * center_point[2]
                x_y_z = np.hstack([x_y, z])
                new_word.append(x_y_z)
            arm_strokes.append(new_word)
        return arm_strokes

def main(args=None):
    rclpy.init(args=args)

    node = Calligraphy_Node()

    # Give the Chinese string that you want to writing
    strings = node.strings
    print(strings)
    paint_start_pos = [0, 1024*5]
    words_strokes = []
    for i in range(len(strings)):
        paint_start_pos[0] += 1024
        words_strokes = words_strokes + node.get_all_points(paint_start_pos, strings[i])

    # Set the center of the actual writing plane
    arm_start_pos = [0.417, -0.241, 0.50]
    arm_strokes = node.get_arm_strokes(words_strokes, arm_start_pos)

    # Change type to array for pubilshing
    arm_strokes_array = np.array(arm_strokes)
    for i in range(len(arm_strokes_array)):
        arm_strokes_array[i] = np.array(arm_strokes_array[i])

    input("-------- Press Enter to publish --------")

    for word in arm_strokes_array:
        for stroke in word:
            for point in stroke:
                print(point)
                my_array_for_publishing = Float64MultiArray(data=point)
                node.pub.publish(my_array_for_publishing)
                time.sleep(0)
    
    # Create an empty array as the flag of finish publishing
    flag_for_end = Float64MultiArray(data=np.empty(shape=0))
    node.pub.publish(flag_for_end)
    
    print('Published!')

    # Visualize the writing on the actual writing plane if set True
    if 0:
        ax1 = plt.axes(projection='3d')
        for word in arm_strokes:
            for stroke in word:
                ax1.plot3D(stroke[:, 0], stroke[:, 1], stroke[:, 2])
        plt.show()

    # rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
