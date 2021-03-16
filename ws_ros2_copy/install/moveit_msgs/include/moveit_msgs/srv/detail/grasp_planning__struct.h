// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__STRUCT_H_

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
// Member 'support_surfaces'
#include "rosidl_runtime_c/string.h"
// Member 'target'
// Member 'movable_obstacles'
#include "moveit_msgs/msg/detail/collision_object__struct.h"
// Member 'candidate_grasps'
#include "moveit_msgs/msg/detail/grasp__struct.h"

// Struct defined in srv/GraspPlanning in the package moveit_msgs.
typedef struct moveit_msgs__srv__GraspPlanning_Request
{
  rosidl_runtime_c__String group_name;
  moveit_msgs__msg__CollisionObject target;
  rosidl_runtime_c__String__Sequence support_surfaces;
  moveit_msgs__msg__Grasp__Sequence candidate_grasps;
  moveit_msgs__msg__CollisionObject__Sequence movable_obstacles;
} moveit_msgs__srv__GraspPlanning_Request;

// Struct for a sequence of moveit_msgs__srv__GraspPlanning_Request.
typedef struct moveit_msgs__srv__GraspPlanning_Request__Sequence
{
  moveit_msgs__srv__GraspPlanning_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GraspPlanning_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'grasps'
// already included above
// #include "moveit_msgs/msg/detail/grasp__struct.h"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

// Struct defined in srv/GraspPlanning in the package moveit_msgs.
typedef struct moveit_msgs__srv__GraspPlanning_Response
{
  moveit_msgs__msg__Grasp__Sequence grasps;
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__srv__GraspPlanning_Response;

// Struct for a sequence of moveit_msgs__srv__GraspPlanning_Response.
typedef struct moveit_msgs__srv__GraspPlanning_Response__Sequence
{
  moveit_msgs__srv__GraspPlanning_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GraspPlanning_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__STRUCT_H_
