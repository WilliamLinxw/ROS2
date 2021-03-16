// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/visibility_constraint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `target_pose`
// Member `sensor_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
moveit_msgs__msg__VisibilityConstraint__init(moveit_msgs__msg__VisibilityConstraint * msg)
{
  if (!msg) {
    return false;
  }
  // target_radius
  // target_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->target_pose)) {
    moveit_msgs__msg__VisibilityConstraint__fini(msg);
    return false;
  }
  // cone_sides
  // sensor_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->sensor_pose)) {
    moveit_msgs__msg__VisibilityConstraint__fini(msg);
    return false;
  }
  // max_view_angle
  // max_range_angle
  // sensor_view_direction
  // weight
  return true;
}

void
moveit_msgs__msg__VisibilityConstraint__fini(moveit_msgs__msg__VisibilityConstraint * msg)
{
  if (!msg) {
    return;
  }
  // target_radius
  // target_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->target_pose);
  // cone_sides
  // sensor_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->sensor_pose);
  // max_view_angle
  // max_range_angle
  // sensor_view_direction
  // weight
}

moveit_msgs__msg__VisibilityConstraint *
moveit_msgs__msg__VisibilityConstraint__create()
{
  moveit_msgs__msg__VisibilityConstraint * msg = (moveit_msgs__msg__VisibilityConstraint *)malloc(sizeof(moveit_msgs__msg__VisibilityConstraint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__VisibilityConstraint));
  bool success = moveit_msgs__msg__VisibilityConstraint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__VisibilityConstraint__destroy(moveit_msgs__msg__VisibilityConstraint * msg)
{
  if (msg) {
    moveit_msgs__msg__VisibilityConstraint__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__VisibilityConstraint__Sequence__init(moveit_msgs__msg__VisibilityConstraint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__VisibilityConstraint * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__VisibilityConstraint *)calloc(size, sizeof(moveit_msgs__msg__VisibilityConstraint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__VisibilityConstraint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__VisibilityConstraint__fini(&data[i - 1]);
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
moveit_msgs__msg__VisibilityConstraint__Sequence__fini(moveit_msgs__msg__VisibilityConstraint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__VisibilityConstraint__fini(&array->data[i]);
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

moveit_msgs__msg__VisibilityConstraint__Sequence *
moveit_msgs__msg__VisibilityConstraint__Sequence__create(size_t size)
{
  moveit_msgs__msg__VisibilityConstraint__Sequence * array = (moveit_msgs__msg__VisibilityConstraint__Sequence *)malloc(sizeof(moveit_msgs__msg__VisibilityConstraint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__VisibilityConstraint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__VisibilityConstraint__Sequence__destroy(moveit_msgs__msg__VisibilityConstraint__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__VisibilityConstraint__Sequence__fini(array);
  }
  free(array);
}
