// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_H_

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
// Member 'pre_grasp_posture'
// Member 'grasp_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'grasp_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'pre_grasp_approach'
// Member 'post_grasp_retreat'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/detail/gripper_translation__struct.h"

// Struct defined in msg/Grasp in the package moveit_msgs.
typedef struct moveit_msgs__msg__Grasp
{
  rosidl_runtime_c__String id;
  trajectory_msgs__msg__JointTrajectory pre_grasp_posture;
  trajectory_msgs__msg__JointTrajectory grasp_posture;
  geometry_msgs__msg__PoseStamped grasp_pose;
  double grasp_quality;
  moveit_msgs__msg__GripperTranslation pre_grasp_approach;
  moveit_msgs__msg__GripperTranslation post_grasp_retreat;
  moveit_msgs__msg__GripperTranslation post_place_retreat;
  float max_contact_force;
  rosidl_runtime_c__String__Sequence allowed_touch_objects;
} moveit_msgs__msg__Grasp;

// Struct for a sequence of moveit_msgs__msg__Grasp.
typedef struct moveit_msgs__msg__Grasp__Sequence
{
  moveit_msgs__msg__Grasp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__Grasp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__GRASP__STRUCT_H_
