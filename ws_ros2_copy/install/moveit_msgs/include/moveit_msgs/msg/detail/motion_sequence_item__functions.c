// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/MotionSequenceItem.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_sequence_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `req`
#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"

bool
moveit_msgs__msg__MotionSequenceItem__init(moveit_msgs__msg__MotionSequenceItem * msg)
{
  if (!msg) {
    return false;
  }
  // req
  if (!moveit_msgs__msg__MotionPlanRequest__init(&msg->req)) {
    moveit_msgs__msg__MotionSequenceItem__fini(msg);
    return false;
  }
  // blend_radius
  return true;
}

void
moveit_msgs__msg__MotionSequenceItem__fini(moveit_msgs__msg__MotionSequenceItem * msg)
{
  if (!msg) {
    return;
  }
  // req
  moveit_msgs__msg__MotionPlanRequest__fini(&msg->req);
  // blend_radius
}

moveit_msgs__msg__MotionSequenceItem *
moveit_msgs__msg__MotionSequenceItem__create()
{
  moveit_msgs__msg__MotionSequenceItem * msg = (moveit_msgs__msg__MotionSequenceItem *)malloc(sizeof(moveit_msgs__msg__MotionSequenceItem));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__MotionSequenceItem));
  bool success = moveit_msgs__msg__MotionSequenceItem__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__MotionSequenceItem__destroy(moveit_msgs__msg__MotionSequenceItem * msg)
{
  if (msg) {
    moveit_msgs__msg__MotionSequenceItem__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__MotionSequenceItem__Sequence__init(moveit_msgs__msg__MotionSequenceItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__MotionSequenceItem * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__MotionSequenceItem *)calloc(size, sizeof(moveit_msgs__msg__MotionSequenceItem));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__MotionSequenceItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__MotionSequenceItem__fini(&data[i - 1]);
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
moveit_msgs__msg__MotionSequenceItem__Sequence__fini(moveit_msgs__msg__MotionSequenceItem__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__MotionSequenceItem__fini(&array->data[i]);
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

moveit_msgs__msg__MotionSequenceItem__Sequence *
moveit_msgs__msg__MotionSequenceItem__Sequence__create(size_t size)
{
  moveit_msgs__msg__MotionSequenceItem__Sequence * array = (moveit_msgs__msg__MotionSequenceItem__Sequence *)malloc(sizeof(moveit_msgs__msg__MotionSequenceItem__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__MotionSequenceItem__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__MotionSequenceItem__Sequence__destroy(moveit_msgs__msg__MotionSequenceItem__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__MotionSequenceItem__Sequence__fini(array);
  }
  free(array);
}
