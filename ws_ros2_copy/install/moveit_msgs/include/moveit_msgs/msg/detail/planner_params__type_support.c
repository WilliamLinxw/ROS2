// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/PlannerParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/planner_params__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/planner_params__functions.h"
#include "moveit_msgs/msg/detail/planner_params__struct.h"


// Include directives for member types
// Member `keys`
// Member `values`
// Member `descriptions`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__PlannerParams__init(message_memory);
}

void PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_fini_function(void * message_memory)
{
  moveit_msgs__msg__PlannerParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_member_array[3] = {
  {
    "keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlannerParams, keys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlannerParams, values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "descriptions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlannerParams, descriptions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_members = {
  "moveit_msgs__msg",  // message namespace
  "PlannerParams",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__msg__PlannerParams),
  PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_member_array,  // message members
  PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_init_function,  // function to initialize message memory (memory has to be allocated)
  PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_type_support_handle = {
  0,
  &PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlannerParams)() {
  if (!PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_type_support_handle.typesupport_identifier) {
    PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
