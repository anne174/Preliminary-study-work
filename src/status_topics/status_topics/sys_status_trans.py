import rclpy
from status_interfaces.msg import TargetState
from rclpy.node import Node

class TransformerNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.tA_subscriber_ = self.create_subscription(
            TargetState, 'topic_A', self.double_callback, 10
        )
        self.tB_publisher_ = self.create_publisher(
            TargetState, 'topic_B', 10
        )

    def double_callback(self, msg):
        new_msg = TargetState()
        new_msg.x = msg.x * 2.0
        new_msg.y = msg.y * 2.0
        self.tB_publisher_.publish(new_msg)
        self.get_logger().info(f'收到A并发布到B')

def main():
    rclpy.init()
    node2 = TransformerNode('sys_status_trans')
    rclpy.spin(node2)
    rclpy.shutdown()
