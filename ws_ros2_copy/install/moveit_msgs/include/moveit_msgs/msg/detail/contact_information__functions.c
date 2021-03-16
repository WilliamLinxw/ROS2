// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/ContactInformation.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/contact_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `normal`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `contact_body_1`
// Member `contact_body_2`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__ContactInformation__init(moveit_msgs__msg__ContactInformation * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__init(&msg->normal)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // depth
  // contact_body_1
  if (!rosidl_runtime_c__String__init(&msg->contact_body_1)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // body_type_1
  // contact_body_2
  if (!rosidl_runtime_c__String__init(&msg->contact_body_2)) {
    moveit_msgs__msg__ContactInformation__fini(msg);
    return false;
  }
  // body_type_2
  return true;
}

void
moveit_msgs__msg__ContactInformation__fini(moveit_msgs__msg__ContactInformation * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // normal
  geometry_msgs__msg__Vector3__fini(&msg->normal);
  // depth
  // contact_body_1
  rosidl_runtime_c__String__fini(&msg->contact_body_1);
  // body_type_1
  // contact_body_2
  rosidl_runtime_c__String__fini(&msg->contact_body_2);
  // body_type_2
}

moveit_msgs__msg__ContactInformation *
moveit_msgs__msg__ContactInformation__create()
{
  moveit_msgs__msg__ContactInformation * msg = (moveit_msgs__msg__ContactInformation *)malloc(sizeof(moveit_msgs__msg__ContactInformation));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__ContactInformation));
  bool success = moveit_msgs__msg__ContactInformation__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__ContactInformation__destroy(moveit_msgs__msg__ContactInformation * msg)
{
  if (msg) {
    moveit_msgs__msg__ContactInformation__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__ContactInformation__Sequence__init(moveit_msgs__msg__ContactInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__ContactInformation * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__ContactInformation *)calloc(size, sizeof(moveit_msgs__msg__ContactInformation));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__ContactInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__ContactInformation__fini(&data[i - 1]);
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
moveit_msgs__msg__ContactInformation__Sequence__fini(moveit_msgs__msg__ContactInformation__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__ContactInformation__fini(&array->data[i]);
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

moveit_msgs__msg__ContactInformation__Sequence *
moveit_msgs__msg__ContactInformation__Sequence__create(size_t size)
{
  moveit_msgs__msg__ContactInformation__Sequence * array = (moveit_msgs__msg__ContactInformation__Sequence *)malloc(sizeof(moveit_msgs__msg__ContactInformation__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__ContactInformation__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__ContactInformation__Sequence__destroy(moveit_msgs__msg__ContactInformation__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__ContactInformation__Sequence__fini(array);
  }
  free(array);
}
