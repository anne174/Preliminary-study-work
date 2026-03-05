import rclpy
from status_interfaces.msg import TargetState
from rclpy.node import Node

class SubscriberNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.tB_subscriber_ = self.create_subscription(
            TargetState, 'topic_B', self.print_callback, 10
        )

    def print_callback(self, new_msg):
        self.get_logger().info(f'接收到话题B：x={new_msg.x:.2f}, y={new_msg.y:.2f}')

def main():
    rclpy.init()
    node3 = SubscriberNode('sys_status_sub')
    rclpy.spin(node3)
    rclpy.shutdown()
