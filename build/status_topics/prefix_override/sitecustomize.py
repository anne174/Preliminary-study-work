import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zjq/learnROS2/Febpractice_zjq_ws/install/status_topics'
