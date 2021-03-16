// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

// Struct defined in srv/ExecuteKnownTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__srv__ExecuteKnownTrajectory_Request
{
  moveit_msgs__msg__RobotTrajectory trajectory;
  bool wait_for_execution;
} moveit_msgs__srv__ExecuteKnownTrajectory_Request;

// Struct for a sequence of moveit_msgs__srv__ExecuteKnownTrajectory_Request.
typedef struct moveit_msgs__srv__ExecuteKnownTrajectory_Request__Sequence
{
  moveit_msgs__srv__ExecuteKnownTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__ExecuteKnownTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

// Struct defined in srv/ExecuteKnownTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__srv__ExecuteKnownTrajectory_Response
{
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__srv__ExecuteKnownTrajectory_Response;

// Struct for a sequence of moveit_msgs__srv__ExecuteKnownTrajectory_Response.
typedef struct moveit_msgs__srv__ExecuteKnownTrajectory_Response__Sequence
{
  moveit_msgs__srv__ExecuteKnownTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__ExecuteKnownTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__EXECUTE_KNOWN_TRAJECTORY__STRUCT_H_
