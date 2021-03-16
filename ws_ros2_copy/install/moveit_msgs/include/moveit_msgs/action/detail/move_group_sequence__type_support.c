// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:action/MoveGroupSequence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/action/detail/move_group_sequence__functions.h"
#include "moveit_msgs/action/detail/move_group_sequence__struct.h"


// Include directives for member types
// Member `request`
#include "moveit_msgs/msg/motion_sequence_request.h"
// Member `request`
#include "moveit_msgs/msg/detail/motion_sequence_request__rosidl_typesupport_introspection_c.h"
// Member `planning_options`
#include "moveit_msgs/msg/planning_options.h"
// Member `planning_options`
#include "moveit_msgs/msg/detail/planning_options__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__MoveGroupSequence_Goal__init(message_memory);
}

void MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_fini_function(void * message_memory)
{
  moveit_msgs__action__MoveGroupSequence_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_member_array[2] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_Goal, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_Goal, planning_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroupSequence_Goal",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroupSequence_Goal),
  MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_member_array,  // message members
  MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_type_support_handle = {
  0,
  &MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_Goal)() {
  MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MotionSequenceRequest)();
  MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningOptions)();
  if (!MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_type_support_handle.typesupport_identifier) {
    MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroupSequence_Goal__rosidl_typesupport_introspection_c__MoveGroupSequence_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__functions.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"


// Include directives for member types
// Member `response`
#include "moveit_msgs/msg/motion_sequence_response.h"
// Member `response`
#include "moveit_msgs/msg/detail/motion_sequence_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__MoveGroupSequence_Result__init(message_memory);
}

void MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_fini_function(void * message_memory)
{
  moveit_msgs__action__MoveGroupSequence_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_Result, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroupSequence_Result",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__action__MoveGroupSequence_Result),
  MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_member_array,  // message members
  MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_type_support_handle = {
  0,
  &MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_Result)() {
  MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MotionSequenceResponse)();
  if (!MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_type_support_handle.typesupport_identifier) {
    MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroupSequence_Result__rosidl_typesupport_introspection_c__MoveGroupSequence_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__functions.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__MoveGroupSequence_Feedback__init(message_memory);
}

void MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_fini_function(void * message_memory)
{
  moveit_msgs__action__MoveGroupSequence_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_Feedback, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroupSequence_Feedback",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__action__MoveGroupSequence_Feedback),
  MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_message_member_array,  // message members
  MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_message_type_support_handle = {
  0,
  &MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_Feedback)() {
  if (!MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroupSequence_Feedback__rosidl_typesupport_introspection_c__MoveGroupSequence_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__functions.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "moveit_msgs/action/move_group_sequence.h"
// Member `goal`
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__MoveGroupSequence_SendGoal_Request__init(message_memory);
}

void MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_fini_function(void * message_memory)
{
  moveit_msgs__action__MoveGroupSequence_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroupSequence_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroupSequence_SendGoal_Request),
  MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_member_array,  // message members
  MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_SendGoal_Request)() {
  MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_Goal)();
  if (!MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroupSequence_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__functions.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__MoveGroupSequence_SendGoal_Response__init(message_memory);
}

void MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_fini_function(void * message_memory)
{
  moveit_msgs__action__MoveGroupSequence_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroupSequence_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroupSequence_SendGoal_Response),
  MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_member_array,  // message members
  MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_SendGoal_Response)() {
  MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroupSequence_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_service_members = {
  "moveit_msgs__action",  // service namespace
  "MoveGroupSequence_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_service_type_support_handle = {
  0,
  &moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_SendGoal)() {
  if (!moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_SendGoal_Response)()->data;
  }

  return &moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__functions.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__MoveGroupSequence_GetResult_Request__init(message_memory);
}

void MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_fini_function(void * message_memory)
{
  moveit_msgs__action__MoveGroupSequence_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroupSequence_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__action__MoveGroupSequence_GetResult_Request),
  MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_member_array,  // message members
  MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_type_support_handle = {
  0,
  &MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_GetResult_Request)() {
  MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroupSequence_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__functions.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "moveit_msgs/action/move_group_sequence.h"
// Member `result`
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__MoveGroupSequence_GetResult_Response__init(message_memory);
}

void MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_fini_function(void * message_memory)
{
  moveit_msgs__action__MoveGroupSequence_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroupSequence_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroupSequence_GetResult_Response),
  MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_member_array,  // message members
  MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_type_support_handle = {
  0,
  &MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_GetResult_Response)() {
  MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_Result)();
  if (!MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroupSequence_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_service_members = {
  "moveit_msgs__action",  // service namespace
  "MoveGroupSequence_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_service_type_support_handle = {
  0,
  &moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_GetResult)() {
  if (!moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_GetResult_Response)()->data;
  }

  return &moveit_msgs__action__detail__move_group_sequence__rosidl_typesupport_introspection_c__MoveGroupSequence_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__functions.h"
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/move_group_sequence.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__action__MoveGroupSequence_FeedbackMessage__init(message_memory);
}

void MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_fini_function(void * message_memory)
{
  moveit_msgs__action__MoveGroupSequence_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroupSequence_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroupSequence_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroupSequence_FeedbackMessage),
  MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_member_array,  // message members
  MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_FeedbackMessage)() {
  MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroupSequence_Feedback)();
  if (!MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroupSequence_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroupSequence_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
