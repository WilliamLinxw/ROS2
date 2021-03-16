// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PositionIKRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'group_name'
// Member 'ik_link_name'
// Member 'ik_link_names'
#include "rosidl_runtime_c/string.h"
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"
// Member 'pose_stamped'
// Member 'pose_stamped_vector'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/PositionIKRequest in the package moveit_msgs.
typedef struct moveit_msgs__msg__PositionIKRequest
{
  rosidl_runtime_c__String group_name;
  moveit_msgs__msg__RobotState robot_state;
  moveit_msgs__msg__Constraints constraints;
  bool avoid_collisions;
  rosidl_runtime_c__String ik_link_name;
  geometry_msgs__msg__PoseStamped pose_stamped;
  rosidl_runtime_c__String__Sequence ik_link_names;
  geometry_msgs__msg__PoseStamped__Sequence pose_stamped_vector;
  builtin_interfaces__msg__Duration timeout;
} moveit_msgs__msg__PositionIKRequest;

// Struct for a sequence of moveit_msgs__msg__PositionIKRequest.
typedef struct moveit_msgs__msg__PositionIKRequest__Sequence
{
  moveit_msgs__msg__PositionIKRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PositionIKRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_IK_REQUEST__STRUCT_H_
