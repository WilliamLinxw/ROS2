// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/BoundingVolume.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/bounding_volume__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__functions.h"
// Member `primitive_poses`
// Member `mesh_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__functions.h"

bool
moveit_msgs__msg__BoundingVolume__init(moveit_msgs__msg__BoundingVolume * msg)
{
  if (!msg) {
    return false;
  }
  // primitives
  if (!shape_msgs__msg__SolidPrimitive__Sequence__init(&msg->primitives, 0)) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
    return false;
  }
  // primitive_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->primitive_poses, 0)) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
    return false;
  }
  // meshes
  if (!shape_msgs__msg__Mesh__Sequence__init(&msg->meshes, 0)) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
    return false;
  }
  // mesh_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->mesh_poses, 0)) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__BoundingVolume__fini(moveit_msgs__msg__BoundingVolume * msg)
{
  if (!msg) {
    return;
  }
  // primitives
  shape_msgs__msg__SolidPrimitive__Sequence__fini(&msg->primitives);
  // primitive_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->primitive_poses);
  // meshes
  shape_msgs__msg__Mesh__Sequence__fini(&msg->meshes);
  // mesh_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->mesh_poses);
}

moveit_msgs__msg__BoundingVolume *
moveit_msgs__msg__BoundingVolume__create()
{
  moveit_msgs__msg__BoundingVolume * msg = (moveit_msgs__msg__BoundingVolume *)malloc(sizeof(moveit_msgs__msg__BoundingVolume));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__BoundingVolume));
  bool success = moveit_msgs__msg__BoundingVolume__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__BoundingVolume__destroy(moveit_msgs__msg__BoundingVolume * msg)
{
  if (msg) {
    moveit_msgs__msg__BoundingVolume__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__BoundingVolume__Sequence__init(moveit_msgs__msg__BoundingVolume__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__BoundingVolume * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__BoundingVolume *)calloc(size, sizeof(moveit_msgs__msg__BoundingVolume));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__BoundingVolume__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__BoundingVolume__fini(&data[i - 1]);
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
moveit_msgs__msg__BoundingVolume__Sequence__fini(moveit_msgs__msg__BoundingVolume__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__BoundingVolume__fini(&array->data[i]);
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

moveit_msgs__msg__BoundingVolume__Sequence *
moveit_msgs__msg__BoundingVolume__Sequence__create(size_t size)
{
  moveit_msgs__msg__BoundingVolume__Sequence * array = (moveit_msgs__msg__BoundingVolume__Sequence *)malloc(sizeof(moveit_msgs__msg__BoundingVolume__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__BoundingVolume__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__BoundingVolume__Sequence__destroy(moveit_msgs__msg__BoundingVolume__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__BoundingVolume__Sequence__fini(array);
  }
  free(array);
}
