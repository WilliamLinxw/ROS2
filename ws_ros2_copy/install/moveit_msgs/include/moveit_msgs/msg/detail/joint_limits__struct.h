// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/JointLimits in the package moveit_msgs.
typedef struct moveit_msgs__msg__JointLimits
{
  rosidl_runtime_c__String joint_name;
  bool has_position_limits;
  double min_position;
  double max_position;
  bool has_velocity_limits;
  double max_velocity;
  bool has_acceleration_limits;
  double max_acceleration;
} moveit_msgs__msg__JointLimits;

// Struct for a sequence of moveit_msgs__msg__JointLimits.
typedef struct moveit_msgs__msg__JointLimits__Sequence
{
  moveit_msgs__msg__JointLimits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__JointLimits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__JOINT_LIMITS__STRUCT_H_
