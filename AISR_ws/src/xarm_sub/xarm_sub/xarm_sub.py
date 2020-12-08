import rclpy
from rclpy.node import Node

from std_msgs.msg import String

import os
import sys
import time
import math
import numpy as np

from xarm.wrapper import XArmAPI

sys.path.append(os.path.join(os.path.dirname(__file__), '../../..'))

#######################################################
"""
Just for test example
"""
if len(sys.argv) >= 2:
    ip = sys.argv[1]
else:
    try:
        from configparser import ConfigParser
        parser = ConfigParser()
        parser.read('./src/xarm_sub/xarm_config/robot.conf')
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

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)

        # Get list for angles and speeds
        angles_speeds= list(np.array(msg.data.split(" "), dtype=np.float))

        # Extract angles
        angles = angles_speeds[::2]
        
        # Extract speeds
        speeds = angles_speeds[1::2]

        # Process the angle data
        angles[1] = -angles[1]
        angles[0] += math.degrees(-2.932)
        angles[1] += math.degrees(1.187)
        angles[2] += math.degrees(1.990)
        angles[3] += math.degrees(1.012)
        angles[4] += math.degrees(3.124)

        # Select the speed and send the command
        speed = min(max(speeds), 40)
        print('speed: ', speed)
        arm.set_servo_angle(angle=angles, speed=speed, is_radian=False, wait=False)
        print(arm.get_servo_angle(), arm.get_servo_angle(is_radian=True))


def main(args=None):
    rclpy.init(args=args)

    white_arm_subscriber = WhiteArmSubscriber()

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
    arm = XArmAPI(ip)
    arm.motion_enable(enable=True)
    arm.set_mode(0)
    arm.set_state(state=0)

    main()

    # print('Motion finished')

    # arm.disconnect()