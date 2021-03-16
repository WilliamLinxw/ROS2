// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/collision_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
// Member `primitive_poses`
// Member `mesh_poses`
// Member `plane_poses`
// Member `subframe_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `id`
// Member `subframe_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "object_recognition_msgs/msg/detail/object_type__functions.h"
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__functions.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__functions.h"
// Member `planes`
#include "shape_msgs/msg/detail/plane__functions.h"

bool
moveit_msgs__msg__CollisionObject__init(moveit_msgs__msg__CollisionObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // type
  if (!object_recognition_msgs__msg__ObjectType__init(&msg->type)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // primitives
  if (!shape_msgs__msg__SolidPrimitive__Sequence__init(&msg->primitives, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // primitive_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->primitive_poses, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // meshes
  if (!shape_msgs__msg__Mesh__Sequence__init(&msg->meshes, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // mesh_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->mesh_poses, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // planes
  if (!shape_msgs__msg__Plane__Sequence__init(&msg->planes, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // plane_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->plane_poses, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // subframe_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->subframe_names, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // subframe_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->subframe_poses, 0)) {
    moveit_msgs__msg__CollisionObject__fini(msg);
    return false;
  }
  // operation
  return true;
}

void
moveit_msgs__msg__CollisionObject__fini(moveit_msgs__msg__CollisionObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // type
  object_recognition_msgs__msg__ObjectType__fini(&msg->type);
  // primitives
  shape_msgs__msg__SolidPrimitive__Sequence__fini(&msg->primitives);
  // primitive_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->primitive_poses);
  // meshes
  shape_msgs__msg__Mesh__Sequence__fini(&msg->meshes);
  // mesh_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->mesh_poses);
  // planes
  shape_msgs__msg__Plane__Sequence__fini(&msg->planes);
  // plane_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->plane_poses);
  // subframe_names
  rosidl_runtime_c__String__Sequence__fini(&msg->subframe_names);
  // subframe_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->subframe_poses);
  // operation
}

moveit_msgs__msg__CollisionObject *
moveit_msgs__msg__CollisionObject__create()
{
  moveit_msgs__msg__CollisionObject * msg = (moveit_msgs__msg__CollisionObject *)malloc(sizeof(moveit_msgs__msg__CollisionObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CollisionObject));
  bool success = moveit_msgs__msg__CollisionObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CollisionObject__destroy(moveit_msgs__msg__CollisionObject * msg)
{
  if (msg) {
    moveit_msgs__msg__CollisionObject__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__CollisionObject__Sequence__init(moveit_msgs__msg__CollisionObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__CollisionObject * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__CollisionObject *)calloc(size, sizeof(moveit_msgs__msg__CollisionObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CollisionObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CollisionObject__fini(&data[i - 1]);
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
moveit_msgs__msg__CollisionObject__Sequence__fini(moveit_msgs__msg__CollisionObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__CollisionObject__fini(&array->data[i]);
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

moveit_msgs__msg__CollisionObject__Sequence *
moveit_msgs__msg__CollisionObject__Sequence__create(size_t size)
{
  moveit_msgs__msg__CollisionObject__Sequence * array = (moveit_msgs__msg__CollisionObject__Sequence *)malloc(sizeof(moveit_msgs__msg__CollisionObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CollisionObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CollisionObject__Sequence__destroy(moveit_msgs__msg__CollisionObject__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__CollisionObject__Sequence__fini(array);
  }
  free(array);
}
