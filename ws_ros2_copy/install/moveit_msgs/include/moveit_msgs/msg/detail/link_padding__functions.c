// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/LinkPadding.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/link_padding__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `link_name`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__LinkPadding__init(moveit_msgs__msg__LinkPadding * msg)
{
  if (!msg) {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__init(&msg->link_name)) {
    moveit_msgs__msg__LinkPadding__fini(msg);
    return false;
  }
  // padding
  return true;
}

void
moveit_msgs__msg__LinkPadding__fini(moveit_msgs__msg__LinkPadding * msg)
{
  if (!msg) {
    return;
  }
  // link_name
  rosidl_runtime_c__String__fini(&msg->link_name);
  // padding
}

moveit_msgs__msg__LinkPadding *
moveit_msgs__msg__LinkPadding__create()
{
  moveit_msgs__msg__LinkPadding * msg = (moveit_msgs__msg__LinkPadding *)malloc(sizeof(moveit_msgs__msg__LinkPadding));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__LinkPadding));
  bool success = moveit_msgs__msg__LinkPadding__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__LinkPadding__destroy(moveit_msgs__msg__LinkPadding * msg)
{
  if (msg) {
    moveit_msgs__msg__LinkPadding__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__LinkPadding__Sequence__init(moveit_msgs__msg__LinkPadding__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__LinkPadding * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__LinkPadding *)calloc(size, sizeof(moveit_msgs__msg__LinkPadding));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__LinkPadding__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__LinkPadding__fini(&data[i - 1]);
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
moveit_msgs__msg__LinkPadding__Sequence__fini(moveit_msgs__msg__LinkPadding__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__LinkPadding__fini(&array->data[i]);
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

moveit_msgs__msg__LinkPadding__Sequence *
moveit_msgs__msg__LinkPadding__Sequence__create(size_t size)
{
  moveit_msgs__msg__LinkPadding__Sequence * array = (moveit_msgs__msg__LinkPadding__Sequence *)malloc(sizeof(moveit_msgs__msg__LinkPadding__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__LinkPadding__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__LinkPadding__Sequence__destroy(moveit_msgs__msg__LinkPadding__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__LinkPadding__Sequence__fini(array);
  }
  free(array);
}
