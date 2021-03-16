// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
// Member 'touch_links'
#include "rosidl_runtime_c/string.h"
// Member 'object'
#include "moveit_msgs/msg/detail/collision_object__struct.h"
// Member 'detach_posture'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

// Struct defined in msg/AttachedCollisionObject in the package moveit_msgs.
typedef struct moveit_msgs__msg__AttachedCollisionObject
{
  rosidl_runtime_c__String link_name;
  moveit_msgs__msg__CollisionObject object;
  rosidl_runtime_c__String__Sequence touch_links;
  trajectory_msgs__msg__JointTrajectory detach_posture;
  double weight;
} moveit_msgs__msg__AttachedCollisionObject;

// Struct for a sequence of moveit_msgs__msg__AttachedCollisionObject.
typedef struct moveit_msgs__msg__AttachedCollisionObject__Sequence
{
  moveit_msgs__msg__AttachedCollisionObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__AttachedCollisionObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ATTACHED_COLLISION_OBJECT__STRUCT_H_
