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

xarm_ip='192.168.1.217'

sys.path.append(os.path.join(os.path.dirname(__file__), '../../..'))

arm = XArmAPI(ip)

class WhiteArmTrigger(Node):

    def __init__(self):
        super().__init__('white_arm_trigger')
        self.subscription = self.create_subscription(String, 'move_control', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning
        

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)

        if msg.data == 'open_white_arm':
            arm.motion_enable(enable=True)
            arm.set_mode(0)
            arm.set_state(state=0)
            print('xArm is in sport state now')
        elif msg.data == 'close_white_arm':
            arm.motion_enable(enable=False)
            arm.set_state(state=4)
            print('xArm is in stop state now')
    
def main(args=None, action_name=None):

    print('Node started')

    rclpy.init(args=args)

    white_arm_subscriber = WhiteArmTrigger()

    rclpy.spin(white_arm_trigger)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    white_arm_subscriber.destroy_node()
    rclpy.shutdown()

    # Disconnect xArm
    arm.reset(wait=True)
    arm.disconnet()
    print('xArm disconnected')

if __name__ == '__main__':
    main()

    
