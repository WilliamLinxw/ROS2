// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SCENE_SETTINGS'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__SCENE_SETTINGS = 1ul
};

/// Constant 'ROBOT_STATE'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__ROBOT_STATE = 2ul
};

/// Constant 'ROBOT_STATE_ATTACHED_OBJECTS'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__ROBOT_STATE_ATTACHED_OBJECTS = 4ul
};

/// Constant 'WORLD_OBJECT_NAMES'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__WORLD_OBJECT_NAMES = 8ul
};

/// Constant 'WORLD_OBJECT_GEOMETRY'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__WORLD_OBJECT_GEOMETRY = 16ul
};

/// Constant 'OCTOMAP'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__OCTOMAP = 32ul
};

/// Constant 'TRANSFORMS'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__TRANSFORMS = 64ul
};

/// Constant 'ALLOWED_COLLISION_MATRIX'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__ALLOWED_COLLISION_MATRIX = 128ul
};

/// Constant 'LINK_PADDING_AND_SCALING'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__LINK_PADDING_AND_SCALING = 256ul
};

/// Constant 'OBJECT_COLORS'.
enum
{
  moveit_msgs__msg__PlanningSceneComponents__OBJECT_COLORS = 512ul
};

// Struct defined in msg/PlanningSceneComponents in the package moveit_msgs.
typedef struct moveit_msgs__msg__PlanningSceneComponents
{
  uint32_t components;
} moveit_msgs__msg__PlanningSceneComponents;

// Struct for a sequence of moveit_msgs__msg__PlanningSceneComponents.
typedef struct moveit_msgs__msg__PlanningSceneComponents__Sequence
{
  moveit_msgs__msg__PlanningSceneComponents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PlanningSceneComponents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__STRUCT_H_
