// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/DisplayTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model_id'
#include "rosidl_runtime_c/string.h"
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.h"

// Struct defined in msg/DisplayTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__msg__DisplayTrajectory
{
  rosidl_runtime_c__String model_id;
  moveit_msgs__msg__RobotTrajectory__Sequence trajectory;
  moveit_msgs__msg__RobotState trajectory_start;
} moveit_msgs__msg__DisplayTrajectory;

// Struct for a sequence of moveit_msgs__msg__DisplayTrajectory.
typedef struct moveit_msgs__msg__DisplayTrajectory__Sequence
{
  moveit_msgs__msg__DisplayTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__DisplayTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__DISPLAY_TRAJECTORY__STRUCT_H_
