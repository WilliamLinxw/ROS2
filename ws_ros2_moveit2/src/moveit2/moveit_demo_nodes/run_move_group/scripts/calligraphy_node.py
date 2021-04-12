#!/usr/bin/env python3
#!coding=utf-8

import numpy as np
import cv2
from matplotlib import pyplot as plt
import json
import os
import sys
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class Calligraphy_Node(Node):
    def __init__(self):
        super().__init__('calligraphy_talker')
        self.pub = self.create_publihser(String, 'arm_strokes')
        self.WORD_DIR = '/home/caesar/Desktop/tad-ros2/tad_robot/pyscript/calligraphy/data/'
        # dst = np.float32([[50,150],[50,250],[-50,250]])
        # dst = np.float32([[50, 250], [-50, 250], [-50, 150]])
        # src = np.float32([[0, 0], [0, 1024*5], [1024*4, 1024*5]])
        # self.T_img2arm = cv2.getAffineTransform(src, dst)

        #  np.matrix(M)*np.matrix([50, 200, 1]).T

    def get_arm_strokes(self, words_strokes, center_point):
        center_x,center_y,center_z = center_point[0],center_point[1],center_point[2]

        w = 0.05
        dst = np.float32([[center_x-w, center_y+w], 
                        [center_x+w, center_y+w],
                        [center_x+w, center_y-w]
                        ])
        src = np.float32([[0, 0], [0,1024], [1024, 1024]])
        T_img2arm = cv2.getAffineTransform(src, dst)

        arm_strokes = []
        for word_id in range(0, len(words_strokes)):
            word = words_strokes[word_id]
            new_word = []
            for stroke in word:
                stroke_ = stroke.reshape([-1, 2])
                ones_ = np.ones([len(stroke_), 1])
                stroke_ = np.hstack([stroke_, ones_]).T
                arm_stroke_ = np.matmul(
                    self.T_img2arm, stroke_).T.reshape([-1, 2])
                new_word.append(arm_stroke_)
            arm_strokes.append(new_word)
        return arm_strokes

    def get_word_strokes(self, word):
        word_strokes = []
        with open(self.WORD_DIR + word+'.json', encoding='utf-8') as f:
            res = f.read()
            res = json.loads(res)
            medians = np.array(res['medians'])
            for s in medians:
                word_strokes.append(np.array(s))
        return word_strokes

    def get_words(self, words="千山鸟飞绝"):
        all_word_strokes = []
        for i in range(len(words)):
            word = words[i]
            if word == "X":
                continue
            word_strokes = self.get_word_strokes(word)
            all_word_strokes.append(word_strokes)

        return all_word_strokes

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

def main(args=None):
    rclpy.init(args=args)

    node = Calligraphy_Node()

    strings = "桃之夭夭 灼灼其华 之子于归 宜其室家".split(" ")
    start_pos = [0.417,-0.241,0.50]

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()