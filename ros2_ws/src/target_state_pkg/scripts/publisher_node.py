#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import random
from target_state_pkg.msg import TargetState

class RandomPublisher(Node):
    def __init__(self):
        super().__init__('random_publisher_node')
        self.publisher_ = self.create_publisher(TargetState, 'topic_A', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        x = random.uniform(0.0, 100.0)
        y = random.uniform(0.0, 100.0)
        msg = TargetState()
        msg.x = x
        msg.y = y
        self.publisher_.publish(msg)
        self.get_logger().info(f'发布到topic_A: x={x:.2f}, y={y:.2f}')

def main(args=None):
    rclpy.init(args=args)
    node = RandomPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
