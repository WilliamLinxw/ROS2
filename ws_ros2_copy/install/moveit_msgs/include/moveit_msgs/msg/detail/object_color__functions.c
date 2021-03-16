// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/object_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `color`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
moveit_msgs__msg__ObjectColor__init(moveit_msgs__msg__ObjectColor * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    moveit_msgs__msg__ObjectColor__fini(msg);
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    moveit_msgs__msg__ObjectColor__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__ObjectColor__fini(moveit_msgs__msg__ObjectColor * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
}

moveit_msgs__msg__ObjectColor *
moveit_msgs__msg__ObjectColor__create()
{
  moveit_msgs__msg__ObjectColor * msg = (moveit_msgs__msg__ObjectColor *)malloc(sizeof(moveit_msgs__msg__ObjectColor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__ObjectColor));
  bool success = moveit_msgs__msg__ObjectColor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__ObjectColor__destroy(moveit_msgs__msg__ObjectColor * msg)
{
  if (msg) {
    moveit_msgs__msg__ObjectColor__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__ObjectColor__Sequence__init(moveit_msgs__msg__ObjectColor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__ObjectColor * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__ObjectColor *)calloc(size, sizeof(moveit_msgs__msg__ObjectColor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__ObjectColor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__ObjectColor__fini(&data[i - 1]);
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
moveit_msgs__msg__ObjectColor__Sequence__fini(moveit_msgs__msg__ObjectColor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__ObjectColor__fini(&array->data[i]);
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

moveit_msgs__msg__ObjectColor__Sequence *
moveit_msgs__msg__ObjectColor__Sequence__create(size_t size)
{
  moveit_msgs__msg__ObjectColor__Sequence * array = (moveit_msgs__msg__ObjectColor__Sequence *)malloc(sizeof(moveit_msgs__msg__ObjectColor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__ObjectColor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__ObjectColor__Sequence__destroy(moveit_msgs__msg__ObjectColor__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__ObjectColor__Sequence__fini(array);
  }
  free(array);
}
