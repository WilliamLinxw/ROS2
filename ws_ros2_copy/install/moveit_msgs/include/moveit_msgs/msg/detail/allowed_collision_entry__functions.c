// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/allowed_collision_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `enabled`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
moveit_msgs__msg__AllowedCollisionEntry__init(moveit_msgs__msg__AllowedCollisionEntry * msg)
{
  if (!msg) {
    return false;
  }
  // enabled
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->enabled, 0)) {
    moveit_msgs__msg__AllowedCollisionEntry__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__AllowedCollisionEntry__fini(moveit_msgs__msg__AllowedCollisionEntry * msg)
{
  if (!msg) {
    return;
  }
  // enabled
  rosidl_runtime_c__boolean__Sequence__fini(&msg->enabled);
}

moveit_msgs__msg__AllowedCollisionEntry *
moveit_msgs__msg__AllowedCollisionEntry__create()
{
  moveit_msgs__msg__AllowedCollisionEntry * msg = (moveit_msgs__msg__AllowedCollisionEntry *)malloc(sizeof(moveit_msgs__msg__AllowedCollisionEntry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__AllowedCollisionEntry));
  bool success = moveit_msgs__msg__AllowedCollisionEntry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__AllowedCollisionEntry__destroy(moveit_msgs__msg__AllowedCollisionEntry * msg)
{
  if (msg) {
    moveit_msgs__msg__AllowedCollisionEntry__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__AllowedCollisionEntry__Sequence__init(moveit_msgs__msg__AllowedCollisionEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__AllowedCollisionEntry * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__AllowedCollisionEntry *)calloc(size, sizeof(moveit_msgs__msg__AllowedCollisionEntry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__AllowedCollisionEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__AllowedCollisionEntry__fini(&data[i - 1]);
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
moveit_msgs__msg__AllowedCollisionEntry__Sequence__fini(moveit_msgs__msg__AllowedCollisionEntry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__AllowedCollisionEntry__fini(&array->data[i]);
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

moveit_msgs__msg__AllowedCollisionEntry__Sequence *
moveit_msgs__msg__AllowedCollisionEntry__Sequence__create(size_t size)
{
  moveit_msgs__msg__AllowedCollisionEntry__Sequence * array = (moveit_msgs__msg__AllowedCollisionEntry__Sequence *)malloc(sizeof(moveit_msgs__msg__AllowedCollisionEntry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__AllowedCollisionEntry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__AllowedCollisionEntry__Sequence__destroy(moveit_msgs__msg__AllowedCollisionEntry__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__AllowedCollisionEntry__Sequence__fini(array);
  }
  free(array);
}
