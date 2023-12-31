#!/usr/bin/env python3
import rclpy
import rclpy.time
import numpy as np
from rclpy.node import Node
from ackermann_msgs.msg import AckermannDriveStamped
from eufs_msgs.msg import WheelSpeedsStamped

class accel_test(Node):
    def __init__(self):
        super().__init__('accel_test')

        self.get_logger().info("Initiating variables")
        
        publish_topic = '/cmd'
        publish_msg = AckermannDriveStamped

        sub_topic = '/ros_can/wheel_speeds'
        sub_msg = WheelSpeedsStamped #import this message

        self.declare_parameter('wheel_radius', 0.25)
        self.declare_parameter("max_steering", 0) #radians

        self.duration = 30 # seconds
        self.start_timer = self.get_clock().now().nanoseconds
        self.current_vel = 0
        self.setpoint = 1
        self.ku = 1

        self.accel_pub = self.create_publisher(
            publish_msg, publish_topic, 10
        )
        self.velocity_sub = self.create_subscription(
            sub_msg, sub_topic, self.call_back, 10
        )

        self.get_logger().info("Acceleration test initialised")


    def call_back(self, message):
        print("Time: ",self.duration - self.get_time())
        if (self.get_time() < self.duration): # run processes for 30 seconds
            self.current_vel = self.linear_wheel_vel(message)
            
            acceleration = self.P_controller(
            self.ku, self.current_velocity, self.setpoint)
            
            return_msg = AckermannDriveStamped()
            return_msg.drive.acceleration = acceleration
            return_msg.drive.steering_angle = 0.0

            self.accel_pub.publish(return_msg)
        else: 
            self.get_logger().info("Test over, shutting down node")
            self.destroy_node()

    


    def linear_wheel_vel(self, message):
          rps = message.speeds.lb_speed / 60
          radius = self.get_parameter("wheel_radius").get_parameter_value().double_value
          return (rps * np.pi * radius)
        
    def P_controller(self, gain, velocity, target):
          error = target - velocity
          return gain * error
    
    def get_time(self):
         return (self.get_clock().now().nanoseconds - self.start_timer )/ 1000000000


def main(args = None):
    rclpy.init(args=args)
    accel = accel_test()
    rclpy.spin(accel)
    print("Ending Test")
   # rclpy.shutdown()

if __name__ == "__main__":
    main()