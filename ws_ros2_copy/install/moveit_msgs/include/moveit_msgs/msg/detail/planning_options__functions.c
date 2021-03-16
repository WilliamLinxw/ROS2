// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `planning_scene_diff`
#include "moveit_msgs/msg/detail/planning_scene__functions.h"

bool
moveit_msgs__msg__PlanningOptions__init(moveit_msgs__msg__PlanningOptions * msg)
{
  if (!msg) {
    return false;
  }
  // planning_scene_diff
  if (!moveit_msgs__msg__PlanningScene__init(&msg->planning_scene_diff)) {
    moveit_msgs__msg__PlanningOptions__fini(msg);
    return false;
  }
  // plan_only
  // look_around
  // look_around_attempts
  // max_safe_execution_cost
  // replan
  // replan_attempts
  // replan_delay
  return true;
}

void
moveit_msgs__msg__PlanningOptions__fini(moveit_msgs__msg__PlanningOptions * msg)
{
  if (!msg) {
    return;
  }
  // planning_scene_diff
  moveit_msgs__msg__PlanningScene__fini(&msg->planning_scene_diff);
  // plan_only
  // look_around
  // look_around_attempts
  // max_safe_execution_cost
  // replan
  // replan_attempts
  // replan_delay
}

moveit_msgs__msg__PlanningOptions *
moveit_msgs__msg__PlanningOptions__create()
{
  moveit_msgs__msg__PlanningOptions * msg = (moveit_msgs__msg__PlanningOptions *)malloc(sizeof(moveit_msgs__msg__PlanningOptions));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlanningOptions));
  bool success = moveit_msgs__msg__PlanningOptions__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlanningOptions__destroy(moveit_msgs__msg__PlanningOptions * msg)
{
  if (msg) {
    moveit_msgs__msg__PlanningOptions__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__PlanningOptions__Sequence__init(moveit_msgs__msg__PlanningOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__PlanningOptions * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__PlanningOptions *)calloc(size, sizeof(moveit_msgs__msg__PlanningOptions));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlanningOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlanningOptions__fini(&data[i - 1]);
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
moveit_msgs__msg__PlanningOptions__Sequence__fini(moveit_msgs__msg__PlanningOptions__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__PlanningOptions__fini(&array->data[i]);
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

moveit_msgs__msg__PlanningOptions__Sequence *
moveit_msgs__msg__PlanningOptions__Sequence__create(size_t size)
{
  moveit_msgs__msg__PlanningOptions__Sequence * array = (moveit_msgs__msg__PlanningOptions__Sequence *)malloc(sizeof(moveit_msgs__msg__PlanningOptions__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlanningOptions__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlanningOptions__Sequence__destroy(moveit_msgs__msg__PlanningOptions__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__PlanningOptions__Sequence__fini(array);
  }
  free(array);
}
