// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/allowed_collision_matrix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `entry_names`
// Member `default_entry_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `entry_values`
#include "moveit_msgs/msg/detail/allowed_collision_entry__functions.h"
// Member `default_entry_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
moveit_msgs__msg__AllowedCollisionMatrix__init(moveit_msgs__msg__AllowedCollisionMatrix * msg)
{
  if (!msg) {
    return false;
  }
  // entry_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->entry_names, 0)) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
    return false;
  }
  // entry_values
  if (!moveit_msgs__msg__AllowedCollisionEntry__Sequence__init(&msg->entry_values, 0)) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
    return false;
  }
  // default_entry_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->default_entry_names, 0)) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
    return false;
  }
  // default_entry_values
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->default_entry_values, 0)) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__AllowedCollisionMatrix__fini(moveit_msgs__msg__AllowedCollisionMatrix * msg)
{
  if (!msg) {
    return;
  }
  // entry_names
  rosidl_runtime_c__String__Sequence__fini(&msg->entry_names);
  // entry_values
  moveit_msgs__msg__AllowedCollisionEntry__Sequence__fini(&msg->entry_values);
  // default_entry_names
  rosidl_runtime_c__String__Sequence__fini(&msg->default_entry_names);
  // default_entry_values
  rosidl_runtime_c__boolean__Sequence__fini(&msg->default_entry_values);
}

moveit_msgs__msg__AllowedCollisionMatrix *
moveit_msgs__msg__AllowedCollisionMatrix__create()
{
  moveit_msgs__msg__AllowedCollisionMatrix * msg = (moveit_msgs__msg__AllowedCollisionMatrix *)malloc(sizeof(moveit_msgs__msg__AllowedCollisionMatrix));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__AllowedCollisionMatrix));
  bool success = moveit_msgs__msg__AllowedCollisionMatrix__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__AllowedCollisionMatrix__destroy(moveit_msgs__msg__AllowedCollisionMatrix * msg)
{
  if (msg) {
    moveit_msgs__msg__AllowedCollisionMatrix__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__init(moveit_msgs__msg__AllowedCollisionMatrix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__AllowedCollisionMatrix * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__AllowedCollisionMatrix *)calloc(size, sizeof(moveit_msgs__msg__AllowedCollisionMatrix));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__AllowedCollisionMatrix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__AllowedCollisionMatrix__fini(&data[i - 1]);
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
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__fini(moveit_msgs__msg__AllowedCollisionMatrix__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__AllowedCollisionMatrix__fini(&array->data[i]);
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

moveit_msgs__msg__AllowedCollisionMatrix__Sequence *
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__create(size_t size)
{
  moveit_msgs__msg__AllowedCollisionMatrix__Sequence * array = (moveit_msgs__msg__AllowedCollisionMatrix__Sequence *)malloc(sizeof(moveit_msgs__msg__AllowedCollisionMatrix__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__AllowedCollisionMatrix__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__AllowedCollisionMatrix__Sequence__destroy(moveit_msgs__msg__AllowedCollisionMatrix__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__AllowedCollisionMatrix__Sequence__fini(array);
  }
  free(array);
}
