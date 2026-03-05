#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from target_state_pkg.msg import TargetState

class DataProcessor(Node):
    def __init__(self):
        super().__init__('data_processor_node')
        self.subscription = self.create_subscription(
            TargetState,
            'topic_A',
            self.callback,
            10)
        self.publisher_ = self.create_publisher(TargetState, 'topic_B', 10)

    def callback(self, msg):
        new_x = msg.x * 2
        new_y = msg.y * 2
        new_msg = TargetState()
        new_msg.x = new_x
        new_msg.y = new_y
        self.publisher_.publish(new_msg)
        self.get_logger().info(f'处理后发布到topic_B: x={new_x:.2f}, y={new_y:.2f}')

def main(args=None):
    rclpy.init(args=args)
    node = DataProcessor()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
