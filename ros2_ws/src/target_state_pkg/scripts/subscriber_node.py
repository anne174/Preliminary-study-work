#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from target_state_pkg.msg import TargetState

class DataSubscriber(Node):
    def __init__(self):
        super().__init__('data_subscriber_node')
        self.subscription = self.create_subscription(
            TargetState,
            'topic_B',
            self.callback,
            10)

    def callback(self, msg):
        self.get_logger().info(f'从topic_B接收: x={msg.x:.2f}, y={msg.y:.2f}')

def main(args=None):
    rclpy.init(args=args)
    node = DataSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
