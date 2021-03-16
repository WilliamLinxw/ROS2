// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CostSource.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/cost_source__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `aabb_min`
// Member `aabb_max`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
moveit_msgs__msg__CostSource__init(moveit_msgs__msg__CostSource * msg)
{
  if (!msg) {
    return false;
  }
  // cost_density
  // aabb_min
  if (!geometry_msgs__msg__Vector3__init(&msg->aabb_min)) {
    moveit_msgs__msg__CostSource__fini(msg);
    return false;
  }
  // aabb_max
  if (!geometry_msgs__msg__Vector3__init(&msg->aabb_max)) {
    moveit_msgs__msg__CostSource__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__CostSource__fini(moveit_msgs__msg__CostSource * msg)
{
  if (!msg) {
    return;
  }
  // cost_density
  // aabb_min
  geometry_msgs__msg__Vector3__fini(&msg->aabb_min);
  // aabb_max
  geometry_msgs__msg__Vector3__fini(&msg->aabb_max);
}

moveit_msgs__msg__CostSource *
moveit_msgs__msg__CostSource__create()
{
  moveit_msgs__msg__CostSource * msg = (moveit_msgs__msg__CostSource *)malloc(sizeof(moveit_msgs__msg__CostSource));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CostSource));
  bool success = moveit_msgs__msg__CostSource__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CostSource__destroy(moveit_msgs__msg__CostSource * msg)
{
  if (msg) {
    moveit_msgs__msg__CostSource__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__CostSource__Sequence__init(moveit_msgs__msg__CostSource__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__CostSource * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__CostSource *)calloc(size, sizeof(moveit_msgs__msg__CostSource));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CostSource__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CostSource__fini(&data[i - 1]);
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
moveit_msgs__msg__CostSource__Sequence__fini(moveit_msgs__msg__CostSource__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__CostSource__fini(&array->data[i]);
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

moveit_msgs__msg__CostSource__Sequence *
moveit_msgs__msg__CostSource__Sequence__create(size_t size)
{
  moveit_msgs__msg__CostSource__Sequence * array = (moveit_msgs__msg__CostSource__Sequence *)malloc(sizeof(moveit_msgs__msg__CostSource__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CostSource__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CostSource__Sequence__destroy(moveit_msgs__msg__CostSource__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__CostSource__Sequence__fini(array);
  }
  free(array);
}
