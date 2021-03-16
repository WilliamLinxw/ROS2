// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlaceLocation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'allowed_touch_objects'
#include "rosidl_runtime_c/string.h"
// Member 'post_place_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'place_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'pre_place_approach'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/detail/gripper_translation__struct.h"

// Struct defined in msg/PlaceLocation in the package moveit_msgs.
typedef struct moveit_msgs__msg__PlaceLocation
{
  rosidl_runtime_c__String id;
  trajectory_msgs__msg__JointTrajectory post_place_posture;
  geometry_msgs__msg__PoseStamped place_pose;
  double quality;
  moveit_msgs__msg__GripperTranslation pre_place_approach;
  moveit_msgs__msg__GripperTranslation post_place_retreat;
  rosidl_runtime_c__String__Sequence allowed_touch_objects;
} moveit_msgs__msg__PlaceLocation;

// Struct for a sequence of moveit_msgs__msg__PlaceLocation.
typedef struct moveit_msgs__msg__PlaceLocation__Sequence
{
  moveit_msgs__msg__PlaceLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlaceLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLACE_LOCATION__STRUCT_H_
