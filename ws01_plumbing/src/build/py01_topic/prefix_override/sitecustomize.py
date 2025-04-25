import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lihaoting/ROS2/ws01_plumbing/src/install/py01_topic'
