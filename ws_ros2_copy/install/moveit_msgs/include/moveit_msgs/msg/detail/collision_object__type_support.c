// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/collision_object__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/collision_object__functions.h"
#include "moveit_msgs/msg/detail/collision_object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
// Member `primitive_poses`
// Member `mesh_poses`
// Member `plane_poses`
// Member `subframe_poses`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
// Member `primitive_poses`
// Member `mesh_poses`
// Member `plane_poses`
// Member `subframe_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `id`
// Member `subframe_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "object_recognition_msgs/msg/object_type.h"
// Member `type`
#include "object_recognition_msgs/msg/detail/object_type__rosidl_typesupport_introspection_c.h"
// Member `primitives`
#include "shape_msgs/msg/solid_primitive.h"
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__rosidl_typesupport_introspection_c.h"
// Member `meshes`
#include "shape_msgs/msg/mesh.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__rosidl_typesupport_introspection_c.h"
// Member `planes`
#include "shape_msgs/msg/plane.h"
// Member `planes`
#include "shape_msgs/msg/detail/plane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__CollisionObject__init(message_memory);
}

void CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_fini_function(void * message_memory)
{
  moveit_msgs__msg__CollisionObject__fini(message_memory);
}

size_t CollisionObject__rosidl_typesupport_introspection_c__size_function__SolidPrimitive__primitives(
  const void * untyped_member)
{
  const shape_msgs__msg__SolidPrimitive__Sequence * member =
    (const shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * CollisionObject__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitive__primitives(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__SolidPrimitive__Sequence * member =
    (const shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CollisionObject__rosidl_typesupport_introspection_c__get_function__SolidPrimitive__primitives(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__SolidPrimitive__Sequence * member =
    (shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CollisionObject__rosidl_typesupport_introspection_c__resize_function__SolidPrimitive__primitives(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__SolidPrimitive__Sequence * member =
    (shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  shape_msgs__msg__SolidPrimitive__Sequence__fini(member);
  return shape_msgs__msg__SolidPrimitive__Sequence__init(member, size);
}

size_t CollisionObject__rosidl_typesupport_introspection_c__size_function__Pose__primitive_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Pose__primitive_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CollisionObject__rosidl_typesupport_introspection_c__get_function__Pose__primitive_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CollisionObject__rosidl_typesupport_introspection_c__resize_function__Pose__primitive_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t CollisionObject__rosidl_typesupport_introspection_c__size_function__Mesh__meshes(
  const void * untyped_member)
{
  const shape_msgs__msg__Mesh__Sequence * member =
    (const shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return member->size;
}

const void * CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Mesh__meshes(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__Mesh__Sequence * member =
    (const shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CollisionObject__rosidl_typesupport_introspection_c__get_function__Mesh__meshes(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__Mesh__Sequence * member =
    (shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CollisionObject__rosidl_typesupport_introspection_c__resize_function__Mesh__meshes(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__Mesh__Sequence * member =
    (shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  shape_msgs__msg__Mesh__Sequence__fini(member);
  return shape_msgs__msg__Mesh__Sequence__init(member, size);
}

size_t CollisionObject__rosidl_typesupport_introspection_c__size_function__Pose__mesh_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Pose__mesh_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CollisionObject__rosidl_typesupport_introspection_c__get_function__Pose__mesh_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CollisionObject__rosidl_typesupport_introspection_c__resize_function__Pose__mesh_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t CollisionObject__rosidl_typesupport_introspection_c__size_function__Plane__planes(
  const void * untyped_member)
{
  const shape_msgs__msg__Plane__Sequence * member =
    (const shape_msgs__msg__Plane__Sequence *)(untyped_member);
  return member->size;
}

const void * CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Plane__planes(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__Plane__Sequence * member =
    (const shape_msgs__msg__Plane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CollisionObject__rosidl_typesupport_introspection_c__get_function__Plane__planes(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__Plane__Sequence * member =
    (shape_msgs__msg__Plane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CollisionObject__rosidl_typesupport_introspection_c__resize_function__Plane__planes(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__Plane__Sequence * member =
    (shape_msgs__msg__Plane__Sequence *)(untyped_member);
  shape_msgs__msg__Plane__Sequence__fini(member);
  return shape_msgs__msg__Plane__Sequence__init(member, size);
}

size_t CollisionObject__rosidl_typesupport_introspection_c__size_function__Pose__plane_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Pose__plane_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CollisionObject__rosidl_typesupport_introspection_c__get_function__Pose__plane_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CollisionObject__rosidl_typesupport_introspection_c__resize_function__Pose__plane_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t CollisionObject__rosidl_typesupport_introspection_c__size_function__Pose__subframe_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Pose__subframe_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CollisionObject__rosidl_typesupport_introspection_c__get_function__Pose__subframe_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CollisionObject__rosidl_typesupport_introspection_c__resize_function__Pose__subframe_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, primitives),  // bytes offset in struct
    NULL,  // default value
    CollisionObject__rosidl_typesupport_introspection_c__size_function__SolidPrimitive__primitives,  // size() function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitive__primitives,  // get_const(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_function__SolidPrimitive__primitives,  // get(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__resize_function__SolidPrimitive__primitives  // resize(index) function pointer
  },
  {
    "primitive_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, primitive_poses),  // bytes offset in struct
    NULL,  // default value
    CollisionObject__rosidl_typesupport_introspection_c__size_function__Pose__primitive_poses,  // size() function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Pose__primitive_poses,  // get_const(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_function__Pose__primitive_poses,  // get(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__resize_function__Pose__primitive_poses  // resize(index) function pointer
  },
  {
    "meshes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, meshes),  // bytes offset in struct
    NULL,  // default value
    CollisionObject__rosidl_typesupport_introspection_c__size_function__Mesh__meshes,  // size() function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Mesh__meshes,  // get_const(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_function__Mesh__meshes,  // get(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__resize_function__Mesh__meshes  // resize(index) function pointer
  },
  {
    "mesh_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, mesh_poses),  // bytes offset in struct
    NULL,  // default value
    CollisionObject__rosidl_typesupport_introspection_c__size_function__Pose__mesh_poses,  // size() function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Pose__mesh_poses,  // get_const(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_function__Pose__mesh_poses,  // get(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__resize_function__Pose__mesh_poses  // resize(index) function pointer
  },
  {
    "planes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, planes),  // bytes offset in struct
    NULL,  // default value
    CollisionObject__rosidl_typesupport_introspection_c__size_function__Plane__planes,  // size() function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Plane__planes,  // get_const(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_function__Plane__planes,  // get(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__resize_function__Plane__planes  // resize(index) function pointer
  },
  {
    "plane_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, plane_poses),  // bytes offset in struct
    NULL,  // default value
    CollisionObject__rosidl_typesupport_introspection_c__size_function__Pose__plane_poses,  // size() function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Pose__plane_poses,  // get_const(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_function__Pose__plane_poses,  // get(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__resize_function__Pose__plane_poses  // resize(index) function pointer
  },
  {
    "subframe_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, subframe_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subframe_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, subframe_poses),  // bytes offset in struct
    NULL,  // default value
    CollisionObject__rosidl_typesupport_introspection_c__size_function__Pose__subframe_poses,  // size() function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_const_function__Pose__subframe_poses,  // get_const(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__get_function__Pose__subframe_poses,  // get(index) function pointer
    CollisionObject__rosidl_typesupport_introspection_c__resize_function__Pose__subframe_poses  // resize(index) function pointer
  },
  {
    "operation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__CollisionObject, operation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_members = {
  "moveit_msgs__msg",  // message namespace
  "CollisionObject",  // message name
  13,  // number of fields
  sizeof(moveit_msgs__msg__CollisionObject),
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array,  // message members
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_init_function,  // function to initialize message memory (memory has to be allocated)
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_type_support_handle = {
  0,
  &CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CollisionObject)() {
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, ObjectType)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, SolidPrimitive)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Mesh)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Plane)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_type_support_handle.typesupport_identifier) {
    CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CollisionObject__rosidl_typesupport_introspection_c__CollisionObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
