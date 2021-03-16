// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entry_names'
// Member 'default_entry_names'
#include "rosidl_runtime_c/string.h"
// Member 'entry_values'
#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.h"
// Member 'default_entry_values'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/AllowedCollisionMatrix in the package moveit_msgs.
typedef struct moveit_msgs__msg__AllowedCollisionMatrix
{
  rosidl_runtime_c__String__Sequence entry_names;
  moveit_msgs__msg__AllowedCollisionEntry__Sequence entry_values;
  rosidl_runtime_c__String__Sequence default_entry_names;
  rosidl_runtime_c__boolean__Sequence default_entry_values;
} moveit_msgs__msg__AllowedCollisionMatrix;

// Struct for a sequence of moveit_msgs__msg__AllowedCollisionMatrix.
typedef struct moveit_msgs__msg__AllowedCollisionMatrix__Sequence
{
  moveit_msgs__msg__AllowedCollisionMatrix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__AllowedCollisionMatrix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ALLOWED_COLLISION_MATRIX__STRUCT_H_
