cmake_minimum_required(VERSION 3.5)
project(run_move_group)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

find_package(moveit_ros_planning_interface REQUIRED)
# This shouldn't be necessary (required by moveit_simple_controller_manager)
find_package(rosidl_default_runtime REQUIRED)
find_package(Boost REQUIRED COMPONENTS system)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(run_move_group src/run_move_group.cpp)
ament_target_dependencies(run_move_group
  moveit_ros_planning_interface
  Boost
)

install(TARGETS run_move_group
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()