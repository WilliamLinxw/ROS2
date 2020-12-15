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

# Flags for different testing situations
# If both are false, just print out the text files
is_arm_ready = False
is_ROS_ready = True

# pdb.set_trace()

#######################################################
"""
Just for test example
"""
if is_arm_ready:
    try:
        from configparser import ConfigParser
        parser = ConfigParser()
        parser.read('../src/xarm_sub/xarm_config/robot.conf')
        ip = parser.get('xArm', 'ip')
    except:
        """
        ip = input('Please input the xArm ip address:')
        if not ip:
            print('input error, exit')
            sys.exit(1)
        """
        # The specific IP for the xArm
        # If a different IP is needed, uncommand lines above
        ip = "192.168.1.217"
########################################################


class WhiteArmSubscriber(Node):

    def __init__(self):
        super().__init__('white_arm_subscriber')
        self.subscription = self.create_subscription(String, 'white_arm', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning


    # Move only one servo based on the message input
    def move_one_servo_only(self, message):

        '''
        This function is now for moving one servo according to commands from Android
        '''

        move_head_dict = json.loads(message)
        print('Message: ', move_head_dict)
        
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

        # Get the current angle
        # Only work when the xArm is connected
        if is_arm_ready:
            current_servo_angle_xArm = arm.get_servo_angle(servo_id=servo_id)

            # Angle offset
            if servo_id == 6:
                current_servo_angle = current_servo_angle_xArm + 54.5
            elif servo_id == 7:
                current_servo_angle = current_servo_angle_xArm - 26

            servo_move_angle = move_head_dict['angle']
            target_servo_angle = current_servo_angle + servo_move_angle

            print('Servo ID: ', servo_id)
            print('target angle: ', target_servo_angle)
        
            arm.set_servo_angle(servo_id=servo_id, angle=target_servo_angle, is_radian=False, speed=10, wait=False)
            print(arm.get_servo_angle(), arm.get_servo_angle(is_radian=True))


    # Move any servo based on the message input
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
            if angles[i_servo] or angles[i_servo] == 0:
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

        # Get the current angle for servos that do not move
        # Only work when the arm is connected
        if is_arm_ready:
            current_angle = arm.get_servo_angle()[1]
            print(current_angle)
            for i in range(len(angles)):
                if angles[i] is None:
                    angles[i] = current_angle[i]
        
        speed = min(max(servo_speed), 40)
        print('speed: ', speed)
        print('angles: ', angles)

        if is_arm_ready:
            arm.set_servo_angle(angle=angles, speed=speed, is_radian=False, wait=False)
            print(arm.get_servo_angle(), arm.get_servo_angle(is_radian=True))


    # Callback function for ROS subscription
    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)

        print(msg.data)
        print(type(msg.data))
        print(('id' in msg.data))

        # Determine whether to move one head only
        
        if 'id' in msg.data:
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


    # Test function when ROS is not ready
    def move_test(self, action_name=None):
        if action_name is not None:
            for line in open('../aisr_actions_20201214/%s.txt'%action_name):
                print(line)
                if is_arm_ready:
                    self.move_any_servo(line)
        else:
            # If the motion was not decided by input, select one here
            for line in open('../aisr_actions_20201214/ResetAll.txt'):
                print(line)
                if is_arm_ready:
                    self.move_any_servo(line)

def main(args=None, action_name=None):
    rclpy.init(args=args)

    white_arm_subscriber = WhiteArmSubscriber()

    # If ROS is ready, start spinning for the subscription
    # If ROS is not ready, go to the move test without entering spinning
    if not is_ROS_ready:
        white_arm_subscriber.move_test(action_name)  
    else:
        rclpy.spin(white_arm_subscriber)

        # Destroy the node explicitly
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        white_arm_subscriber.destroy_node()
        rclpy.shutdown()

        # Shut down the xArm
        arm.disconnect()
        print('xArm disconnected')

if __name__ == '__main__':
    if is_arm_ready:
        arm = XArmAPI(ip)
        arm.motion_enable(enable=True)
        arm.set_mode(0)
        arm.set_state(state=0)

    print('start')
    
    if len(sys.argv) > 1:
        main(action_name=sys.argv[1])
    else:
        main()