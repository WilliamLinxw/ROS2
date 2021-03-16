// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SENSOR_Z'.
enum
{
  moveit_msgs__msg__VisibilityConstraint__SENSOR_Z = 0
};

/// Constant 'SENSOR_Y'.
enum
{
  moveit_msgs__msg__VisibilityConstraint__SENSOR_Y = 1
};

/// Constant 'SENSOR_X'.
enum
{
  moveit_msgs__msg__VisibilityConstraint__SENSOR_X = 2
};

// Include directives for member types
// Member 'target_pose'
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

// Struct defined in msg/VisibilityConstraint in the package moveit_msgs.
typedef struct moveit_msgs__msg__VisibilityConstraint
{
  double target_radius;
  geometry_msgs__msg__PoseStamped target_pose;
  int32_t cone_sides;
  geometry_msgs__msg__PoseStamped sensor_pose;
  double max_view_angle;
  double max_range_angle;
  uint8_t sensor_view_direction;
  double weight;
} moveit_msgs__msg__VisibilityConstraint;

// Struct for a sequence of moveit_msgs__msg__VisibilityConstraint.
typedef struct moveit_msgs__msg__VisibilityConstraint__Sequence
{
  moveit_msgs__msg__VisibilityConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__VisibilityConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__VISIBILITY_CONSTRAINT__STRUCT_H_
