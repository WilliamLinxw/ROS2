// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/allowed_collision_entry__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/allowed_collision_entry__functions.h"
#include "moveit_msgs/msg/detail/allowed_collision_entry__struct.h"


// Include directives for member types
// Member `enabled`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__AllowedCollisionEntry__init(message_memory);
}

void AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_fini_function(void * message_memory)
{
  moveit_msgs__msg__AllowedCollisionEntry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_message_member_array[1] = {
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionEntry, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_message_members = {
  "moveit_msgs__msg",  // message namespace
  "AllowedCollisionEntry",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__msg__AllowedCollisionEntry),
  AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_message_member_array,  // message members
  AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_init_function,  // function to initialize message memory (memory has to be allocated)
  AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_message_type_support_handle = {
  0,
  &AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AllowedCollisionEntry)() {
  if (!AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_message_type_support_handle.typesupport_identifier) {
    AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AllowedCollisionEntry__rosidl_typesupport_introspection_c__AllowedCollisionEntry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
