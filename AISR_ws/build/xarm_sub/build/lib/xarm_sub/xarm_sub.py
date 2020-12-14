import rclpy
from rclpy.node import Node

from std_msgs.msg import String

import os
import sys
import time
import math
import numpy as np
import json

import pdb

from xarm.wrapper import XArmAPI

sys.path.append(os.path.join(os.path.dirname(__file__), '../../..'))

is_test = False

#######################################################
"""
Just for test example
"""
if not is_test:
    if len(sys.argv) >= 2:
        ip = sys.argv[1]
    else:
        try:
            from configparser import ConfigParser
            parser = ConfigParser()
            parser.read('../src/xarm_sub/xarm_config/robot.conf')
            ip = parser.get('xArm', 'ip')
        except:
            ip = input('Please input the xArm ip address:')
            if not ip:
                print('input error, exit')
            sys.exit(1)
########################################################


class WhiteArmSubscriber(Node):

    def __init__(self):
        super().__init__('white_arm_subscriber')
        self.subscription = self.create_subscription(String, 'white_arm', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def move_one_servo_only(self, message):

        '''
        This function is now for moving one servo according to commands from Android
        '''

        move_head_dict = json.loads(message)
        servo_id_ROS = move_head_dict['id']
        
        # ID offset
        if servo_id_ROS == 3:
            servo_id = 5
        elif servo_id_ROS == 4:
            servo_id = 6
        elif servo_id_ROS == 5:
            servo_id = 0
        elif servo_id_ROS == 6:
            servo_id = 1
        elif servo_id_ROS == 7:
            servo_id = 2
        elif servo_id_ROS == 8:
            servo_id = 3
        elif servo_id_ROS == 9:
            servo_id = 4

        current_servo_angle_xArm = arm.get_servo_angle(servo_id=servo_id)

        # Angle offset
        if servo_id == 6:
            current_servo_angle = current_servo_angle_xArm + 54.5
        elif servo_id == 7:
            current_servo_angle = current_servo_angle_xArm - 26

        servo_move_angle = move_head_dict['angle']
        target_servo_angle = current_servo_angle + servo_move_angle
        arm.set_servo_angle(servo_id=servo_id, angle=target_servo_angle, speed=10, wait=False)
        print(arm.get_servo_angle(), arm.get_servo_angle(is_radian=True))


    def move_any_servo(self, message):

        '''
        This function is for moving according to the result data of learning
        '''
        angles = [None, None, None, None, None, None, None]
        message_list = list(np.array(message.split(" "), dtype=np.float))

        servo_id = message_list[::3]
        servo_angle = message_list[1::3]
        servo_speed = message_list[2::3]
        servo_id = list(map(int, servo_id))

        # Put specific servo angle into the angle list
        i_angle = 0
        for id in servo_id:
            angles[id] = servo_angle[i_angle]
            i_angle += 1

        # Process the angle datas for the offsets
        i_servo = 0
        while i_servo <= 6:
            if angles[i_servo]:
                if i_servo == 0:
                    angles[i_servo] += -168
                elif i_servo == 1:
                    angles[i_servo] += 68
                elif i_servo == 2:
                    angles[i_servo] += 114
                elif i_servo == 3:
                    angles[i_servo] += 58
                elif i_servo == 4:
                    angles[i_servo] += 179
                elif i_servo == 5:
                    angles[i_servo] += 54.5
                elif i_servo == 6:
                    angles[i_servo] += -26
            i_servo += 1

        speed = min(max(servo_speed), 40)
        print('speed: ', speed)
        print('angles: ', angles)

        if not is_test:
            arm.set_servo_angle(angle=angles, speed=speed, is_radian=False, wait=False)
            print(arm.get_servo_angle(), arm.get_servo_angle(is_radian=True))
    
    def move_test(self):
        for line in open('../aisr_actions/aisr_actions/Hello.txt'):
            print(line)
            self.move_any_servo(line)

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)

        # Determine whether to move the head only
        if msg.data.find('id'):
            print('Move one servo')
            self.move_one_servo_only(msg.data)
        else:
            print('Move any servo')
            self.move_any_servo(msg.data)

        # # Get list for angles and speeds
        # angles_speeds= list(np.array(msg.data.split(" "), dtype=np.float))

        # # Extract angles
        # angles = angles_speeds[::2]
        
        # # Extract speeds
        # speeds = angles_speeds[1::2]

        # # Process the angle data
        # angles[1] = -angles[1]
        # angles[0] += math.degrees(-2.932)
        # angles[1] += math.degrees(1.187)
        # angles[2] += math.degrees(1.990)
        # angles[3] += math.degrees(1.012)
        # angles[4] += math.degrees(3.124)

        # # Select the speed and send the command
        # speed = min(max(speeds), 40)
        # print('speed: ', speed)
        # arm.set_servo_angle(angle=angles, speed=speed, is_radian=False, wait=False)
        # print(arm.get_servo_angle(), arm.get_servo_angle(is_radian=True))


def main(args=None):
    rclpy.init(args=args)

    white_arm_subscriber = WhiteArmSubscriber()

    if is_test:
        white_arm_subscriber.move_test()
    
    else:
        rclpy.spin(white_arm_subscriber)

        # Destroy the node explicitly
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        white_arm_subscriber.destroy_node()
        rclpy.shutdown()

        # Shut down the xArm
        print('Motion finished')
        arm.disconnect()

if __name__ == '__main__':
    if not is_test:
        arm = XArmAPI(ip)
        arm.motion_enable(enable=True)
        arm.set_mode(0)
        arm.set_state(state=0)

    main()