// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/DisplayRobotState.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/display_robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `highlight_links`
#include "moveit_msgs/msg/detail/object_color__functions.h"

bool
moveit_msgs__msg__DisplayRobotState__init(moveit_msgs__msg__DisplayRobotState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!moveit_msgs__msg__RobotState__init(&msg->state)) {
    moveit_msgs__msg__DisplayRobotState__fini(msg);
    return false;
  }
  // highlight_links
  if (!moveit_msgs__msg__ObjectColor__Sequence__init(&msg->highlight_links, 0)) {
    moveit_msgs__msg__DisplayRobotState__fini(msg);
    return false;
  }
  // hide
  return true;
}

void
moveit_msgs__msg__DisplayRobotState__fini(moveit_msgs__msg__DisplayRobotState * msg)
{
  if (!msg) {
    return;
  }
  // state
  moveit_msgs__msg__RobotState__fini(&msg->state);
  // highlight_links
  moveit_msgs__msg__ObjectColor__Sequence__fini(&msg->highlight_links);
  // hide
}

moveit_msgs__msg__DisplayRobotState *
moveit_msgs__msg__DisplayRobotState__create()
{
  moveit_msgs__msg__DisplayRobotState * msg = (moveit_msgs__msg__DisplayRobotState *)malloc(sizeof(moveit_msgs__msg__DisplayRobotState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__DisplayRobotState));
  bool success = moveit_msgs__msg__DisplayRobotState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__DisplayRobotState__destroy(moveit_msgs__msg__DisplayRobotState * msg)
{
  if (msg) {
    moveit_msgs__msg__DisplayRobotState__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__DisplayRobotState__Sequence__init(moveit_msgs__msg__DisplayRobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__DisplayRobotState * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__DisplayRobotState *)calloc(size, sizeof(moveit_msgs__msg__DisplayRobotState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__DisplayRobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__DisplayRobotState__fini(&data[i - 1]);
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
moveit_msgs__msg__DisplayRobotState__Sequence__fini(moveit_msgs__msg__DisplayRobotState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__DisplayRobotState__fini(&array->data[i]);
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

moveit_msgs__msg__DisplayRobotState__Sequence *
moveit_msgs__msg__DisplayRobotState__Sequence__create(size_t size)
{
  moveit_msgs__msg__DisplayRobotState__Sequence * array = (moveit_msgs__msg__DisplayRobotState__Sequence *)malloc(sizeof(moveit_msgs__msg__DisplayRobotState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__DisplayRobotState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__DisplayRobotState__Sequence__destroy(moveit_msgs__msg__DisplayRobotState__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__DisplayRobotState__Sequence__fini(array);
  }
  free(array);
}
