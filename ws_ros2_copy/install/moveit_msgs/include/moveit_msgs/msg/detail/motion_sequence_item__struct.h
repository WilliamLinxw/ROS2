// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/MotionSequenceItem.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'req'
#include "moveit_msgs/msg/detail/motion_plan_request__struct.h"

// Struct defined in msg/MotionSequenceItem in the package moveit_msgs.
typedef struct moveit_msgs__msg__MotionSequenceItem
{
  moveit_msgs__msg__MotionPlanRequest req;
  double blend_radius;
} moveit_msgs__msg__MotionSequenceItem;

// Struct for a sequence of moveit_msgs__msg__MotionSequenceItem.
typedef struct moveit_msgs__msg__MotionSequenceItem__Sequence
{
  moveit_msgs__msg__MotionSequenceItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__MotionSequenceItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_ITEM__STRUCT_H_
