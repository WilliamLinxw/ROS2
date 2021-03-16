// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/OrientationConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__STRUCT_H_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'link_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/OrientationConstraint in the package moveit_msgs.
typedef struct moveit_msgs__msg__OrientationConstraint
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion orientation;
  rosidl_runtime_c__String link_name;
  double absolute_x_axis_tolerance;
  double absolute_y_axis_tolerance;
  double absolute_z_axis_tolerance;
  double weight;
} moveit_msgs__msg__OrientationConstraint;

// Struct for a sequence of moveit_msgs__msg__OrientationConstraint.
typedef struct moveit_msgs__msg__OrientationConstraint__Sequence
{
  moveit_msgs__msg__OrientationConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__OrientationConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ORIENTATION_CONSTRAINT__STRUCT_H_
