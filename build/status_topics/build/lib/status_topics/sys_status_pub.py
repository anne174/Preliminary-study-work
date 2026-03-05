import rclpy
import random
from status_interfaces.msg import TargetState
from rclpy.node import Node

class PublisherNode(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.tA_publisher_ = self.create_publisher(
            TargetState, 'topic_A', 10
        )
        self.timer = self.create_timer(5.0, self.timer_callback)

    def timer_callback(self):
        msg = TargetState()
        msg.x = random.uniform(0.0, 10.0)
        msg.y = random.uniform(0.0, 10.0)
        self.tA_publisher_.publish(msg)
        self.get_logger().info(f'发布A话题：x={msg.x:.2f}, y={msg.y:.2f}')

def main():
    rclpy.init()
    node1 = PublisherNode('sys_status_pub')
    rclpy.spin(node1)
    rclpy.shutdown()
