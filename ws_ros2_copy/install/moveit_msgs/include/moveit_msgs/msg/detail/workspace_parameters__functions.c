// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/WorkspaceParameters.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/workspace_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `min_corner`
// Member `max_corner`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
moveit_msgs__msg__WorkspaceParameters__init(moveit_msgs__msg__WorkspaceParameters * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__WorkspaceParameters__fini(msg);
    return false;
  }
  // min_corner
  if (!geometry_msgs__msg__Vector3__init(&msg->min_corner)) {
    moveit_msgs__msg__WorkspaceParameters__fini(msg);
    return false;
  }
  // max_corner
  if (!geometry_msgs__msg__Vector3__init(&msg->max_corner)) {
    moveit_msgs__msg__WorkspaceParameters__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__WorkspaceParameters__fini(moveit_msgs__msg__WorkspaceParameters * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // min_corner
  geometry_msgs__msg__Vector3__fini(&msg->min_corner);
  // max_corner
  geometry_msgs__msg__Vector3__fini(&msg->max_corner);
}

moveit_msgs__msg__WorkspaceParameters *
moveit_msgs__msg__WorkspaceParameters__create()
{
  moveit_msgs__msg__WorkspaceParameters * msg = (moveit_msgs__msg__WorkspaceParameters *)malloc(sizeof(moveit_msgs__msg__WorkspaceParameters));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__WorkspaceParameters));
  bool success = moveit_msgs__msg__WorkspaceParameters__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__WorkspaceParameters__destroy(moveit_msgs__msg__WorkspaceParameters * msg)
{
  if (msg) {
    moveit_msgs__msg__WorkspaceParameters__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__WorkspaceParameters__Sequence__init(moveit_msgs__msg__WorkspaceParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__WorkspaceParameters * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__WorkspaceParameters *)calloc(size, sizeof(moveit_msgs__msg__WorkspaceParameters));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__WorkspaceParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__WorkspaceParameters__fini(&data[i - 1]);
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
moveit_msgs__msg__WorkspaceParameters__Sequence__fini(moveit_msgs__msg__WorkspaceParameters__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__WorkspaceParameters__fini(&array->data[i]);
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

moveit_msgs__msg__WorkspaceParameters__Sequence *
moveit_msgs__msg__WorkspaceParameters__Sequence__create(size_t size)
{
  moveit_msgs__msg__WorkspaceParameters__Sequence * array = (moveit_msgs__msg__WorkspaceParameters__Sequence *)malloc(sizeof(moveit_msgs__msg__WorkspaceParameters__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__WorkspaceParameters__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__WorkspaceParameters__Sequence__destroy(moveit_msgs__msg__WorkspaceParameters__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__WorkspaceParameters__Sequence__fini(array);
  }
  free(array);
}
