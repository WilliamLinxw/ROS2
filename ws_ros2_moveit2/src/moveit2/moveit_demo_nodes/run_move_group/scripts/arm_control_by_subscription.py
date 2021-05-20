#!/usr/bin/env python
# -*- coding: utf-8 -*-

import  time

from xarm.wrapper import XArmAPI
from xarm.wrapper import XArmAPI

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import String

is_arm_ready = False

class Listener(Node):

    def __init__(self):
        super().__init__('listener')
        self.sub = self.create_subscription(JointState, '/joint_states', self.joint_state_callback, 10)
        self.real_zero_values = [-162.4, 70,114,58,194]  #模型中关节为0度时,实体关节的角度
        self.ip = '192.168.1.217'
        if is_arm_ready:
            self.arm = XArmAPI(self.ip)
            self.arm.motion_enable(enable=True)
            self.arm.set_mode(0)
            self.arm.set_state(0)
        self.count = 0
        # time.sleep(0.01)
        
    def model_values_to_real_values(self,model_values = [0,0,0,0,0]):
        ''' 将模型上的角度转为xarm上的角度 加上一个初始差值 '''
        real_values = model_values
        real_values[0] += self.real_zero_values[0]
        real_values[1] += self.real_zero_values[1]
        real_values[2] += self.real_zero_values[2]
        real_values[3] *= -1
        real_values[3] += self.real_zero_values[3]
        real_values[4] *= -1
        real_values[4] += self.real_zero_values[4]
        return real_values

    def joint_state_callback(self, data):
        
        joint_position = data.position
        print("joint33-36:",joint_position[33:])
        angles = [joint_position[33]*180/3.14159, joint_position[34]*180/3.14159, joint_position[35]*180/3.14159, joint_position[36]*180/3.14159, joint_position[37]*180/3.14159,54.5, -26]
        angles_ = self.model_values_to_real_values(angles)
        print(angles_)
        if is_arm_ready:
            if self.arm.connected and self.arm.state != 4 and self.count % 10 == 0:
                #def set_servo_angle_j(self, angles, speed=None, mvacc=None, mvtime=None, is_radian=None, **kwargs):
                ret = self.arm.set_servo_angle(angle=angles_, is_radian = False,radius = 40, speed = 30, wait=False)
                print('moved')  
        self.count += 1


def main(args=None):
    rclpy.init(args=args)


    node = Listener()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


