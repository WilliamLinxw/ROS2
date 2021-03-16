// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlannerInterfaceDescription.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planner_interface_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `planner_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__PlannerInterfaceDescription__init(moveit_msgs__msg__PlannerInterfaceDescription * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    moveit_msgs__msg__PlannerInterfaceDescription__fini(msg);
    return false;
  }
  // planner_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->planner_ids, 0)) {
    moveit_msgs__msg__PlannerInterfaceDescription__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__PlannerInterfaceDescription__fini(moveit_msgs__msg__PlannerInterfaceDescription * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // planner_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->planner_ids);
}

moveit_msgs__msg__PlannerInterfaceDescription *
moveit_msgs__msg__PlannerInterfaceDescription__create()
{
  moveit_msgs__msg__PlannerInterfaceDescription * msg = (moveit_msgs__msg__PlannerInterfaceDescription *)malloc(sizeof(moveit_msgs__msg__PlannerInterfaceDescription));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlannerInterfaceDescription));
  bool success = moveit_msgs__msg__PlannerInterfaceDescription__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlannerInterfaceDescription__destroy(moveit_msgs__msg__PlannerInterfaceDescription * msg)
{
  if (msg) {
    moveit_msgs__msg__PlannerInterfaceDescription__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__init(moveit_msgs__msg__PlannerInterfaceDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__PlannerInterfaceDescription * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__PlannerInterfaceDescription *)calloc(size, sizeof(moveit_msgs__msg__PlannerInterfaceDescription));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlannerInterfaceDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlannerInterfaceDescription__fini(&data[i - 1]);
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
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__fini(moveit_msgs__msg__PlannerInterfaceDescription__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__PlannerInterfaceDescription__fini(&array->data[i]);
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

moveit_msgs__msg__PlannerInterfaceDescription__Sequence *
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__create(size_t size)
{
  moveit_msgs__msg__PlannerInterfaceDescription__Sequence * array = (moveit_msgs__msg__PlannerInterfaceDescription__Sequence *)malloc(sizeof(moveit_msgs__msg__PlannerInterfaceDescription__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlannerInterfaceDescription__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__destroy(moveit_msgs__msg__PlannerInterfaceDescription__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__PlannerInterfaceDescription__Sequence__fini(array);
  }
  free(array);
}
