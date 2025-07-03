cmake_minimum_required(VERSION 3.8)
project(data_collection_fe)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(custom_interfaces REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(lifecycle_msgs REQUIRED)
find_package(rosbag2_cpp REQUIRED)

# executables
add_executable(rosbag_recorder src/rosbag_recorder.cpp)
ament_target_dependencies(rosbag_recorder rclcpp_lifecycle std_msgs custom_interfaces rosbag2_cpp)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(TARGETS
  rosbag_recorder
  DESTINATION lib/${PROJECT_NAME})

# python nodes
ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  data_collection_fe/rosbag_manager.py
  DESTINATION lib/${PROJECT_NAME}
)

# launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
