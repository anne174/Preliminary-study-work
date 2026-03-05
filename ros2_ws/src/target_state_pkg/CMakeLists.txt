cmake_minimum_required(VERSION 3.8)
project(target_state_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 声明自定义msg文件
set(msg_files
  "msg/TargetState.msg"
)

# 生成msg接口（核心：让Python能导入该msg）
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  DEPENDENCIES std_msgs
)

# 创建scripts目录（存放Python节点，若手动创建了可省略）
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/scripts)

# 安装Python节点脚本（核心：替代setup.py，让ros2 run能找到节点）
install(
  DIRECTORY scripts/
  DESTINATION lib/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.py"
  PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ
              GROUP_EXECUTE GROUP_READ
              WORLD_EXECUTE WORLD_READ
)

ament_package()

