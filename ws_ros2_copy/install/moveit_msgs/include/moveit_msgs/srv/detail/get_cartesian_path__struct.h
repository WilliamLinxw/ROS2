// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'group_name'
// Member 'link_name'
#include "rosidl_runtime_c/string.h"
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"

// Struct defined in srv/GetCartesianPath in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetCartesianPath_Request
{
  std_msgs__msg__Header header;
  moveit_msgs__msg__RobotState start_state;
  rosidl_runtime_c__String group_name;
  rosidl_runtime_c__String link_name;
  geometry_msgs__msg__Pose__Sequence waypoints;
  double max_step;
  double jump_threshold;
  double prismatic_jump_threshold;
  double revolute_jump_threshold;
  bool avoid_collisions;
  moveit_msgs__msg__Constraints path_constraints;
} moveit_msgs__srv__GetCartesianPath_Request;

// Struct for a sequence of moveit_msgs__srv__GetCartesianPath_Request.
typedef struct moveit_msgs__srv__GetCartesianPath_Request__Sequence
{
  moveit_msgs__srv__GetCartesianPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetCartesianPath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'start_state'
// already included above
// #include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'solution'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

// Struct defined in srv/GetCartesianPath in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetCartesianPath_Response
{
  moveit_msgs__msg__RobotState start_state;
  moveit_msgs__msg__RobotTrajectory solution;
  double fraction;
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__srv__GetCartesianPath_Response;

// Struct for a sequence of moveit_msgs__srv__GetCartesianPath_Response.
typedef struct moveit_msgs__srv__GetCartesianPath_Response__Sequence
{
  moveit_msgs__srv__GetCartesianPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetCartesianPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_H_
