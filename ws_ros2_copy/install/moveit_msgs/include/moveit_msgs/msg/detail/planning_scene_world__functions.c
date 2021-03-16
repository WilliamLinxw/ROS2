// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_scene_world__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `collision_objects`
#include "moveit_msgs/msg/detail/collision_object__functions.h"
// Member `octomap`
#include "octomap_msgs/msg/detail/octomap_with_pose__functions.h"

bool
moveit_msgs__msg__PlanningSceneWorld__init(moveit_msgs__msg__PlanningSceneWorld * msg)
{
  if (!msg) {
    return false;
  }
  // collision_objects
  if (!moveit_msgs__msg__CollisionObject__Sequence__init(&msg->collision_objects, 0)) {
    moveit_msgs__msg__PlanningSceneWorld__fini(msg);
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__OctomapWithPose__init(&msg->octomap)) {
    moveit_msgs__msg__PlanningSceneWorld__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__PlanningSceneWorld__fini(moveit_msgs__msg__PlanningSceneWorld * msg)
{
  if (!msg) {
    return;
  }
  // collision_objects
  moveit_msgs__msg__CollisionObject__Sequence__fini(&msg->collision_objects);
  // octomap
  octomap_msgs__msg__OctomapWithPose__fini(&msg->octomap);
}

moveit_msgs__msg__PlanningSceneWorld *
moveit_msgs__msg__PlanningSceneWorld__create()
{
  moveit_msgs__msg__PlanningSceneWorld * msg = (moveit_msgs__msg__PlanningSceneWorld *)malloc(sizeof(moveit_msgs__msg__PlanningSceneWorld));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlanningSceneWorld));
  bool success = moveit_msgs__msg__PlanningSceneWorld__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlanningSceneWorld__destroy(moveit_msgs__msg__PlanningSceneWorld * msg)
{
  if (msg) {
    moveit_msgs__msg__PlanningSceneWorld__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__PlanningSceneWorld__Sequence__init(moveit_msgs__msg__PlanningSceneWorld__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__PlanningSceneWorld * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__PlanningSceneWorld *)calloc(size, sizeof(moveit_msgs__msg__PlanningSceneWorld));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlanningSceneWorld__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlanningSceneWorld__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__msg__PlanningSceneWorld__Sequence__fini(moveit_msgs__msg__PlanningSceneWorld__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__PlanningSceneWorld__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__msg__PlanningSceneWorld__Sequence *
moveit_msgs__msg__PlanningSceneWorld__Sequence__create(size_t size)
{
  moveit_msgs__msg__PlanningSceneWorld__Sequence * array = (moveit_msgs__msg__PlanningSceneWorld__Sequence *)malloc(sizeof(moveit_msgs__msg__PlanningSceneWorld__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlanningSceneWorld__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlanningSceneWorld__Sequence__destroy(moveit_msgs__msg__PlanningSceneWorld__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__PlanningSceneWorld__Sequence__fini(array);
  }
  free(array);
}
