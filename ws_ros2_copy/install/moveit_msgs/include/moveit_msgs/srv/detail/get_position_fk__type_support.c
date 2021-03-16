// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/detail/get_position_fk__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/detail/get_position_fk__functions.h"
#include "moveit_msgs/srv/detail/get_position_fk__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `fk_link_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `robot_state`
#include "moveit_msgs/msg/robot_state.h"
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__GetPositionFK_Request__init(message_memory);
}

void GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_fini_function(void * message_memory)
{
  moveit_msgs__srv__GetPositionFK_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionFK_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fk_link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionFK_Request, fk_link_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionFK_Request, robot_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GetPositionFK_Request",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__srv__GetPositionFK_Request),
  GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_member_array,  // message members
  GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_type_support_handle = {
  0,
  &GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionFK_Request)() {
  GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  if (!GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_type_support_handle.typesupport_identifier) {
    GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPositionFK_Request__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/get_position_fk__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_fk__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_fk__struct.h"


// Include directives for member types
// Member `pose_stamped`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pose_stamped`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `fk_link_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__GetPositionFK_Response__init(message_memory);
}

void GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_fini_function(void * message_memory)
{
  moveit_msgs__srv__GetPositionFK_Response__fini(message_memory);
}

size_t GetPositionFK_Response__rosidl_typesupport_introspection_c__size_function__PoseStamped__pose_stamped(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * GetPositionFK_Response__rosidl_typesupport_introspection_c__get_const_function__PoseStamped__pose_stamped(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetPositionFK_Response__rosidl_typesupport_introspection_c__get_function__PoseStamped__pose_stamped(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetPositionFK_Response__rosidl_typesupport_introspection_c__resize_function__PoseStamped__pose_stamped(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_member_array[3] = {
  {
    "pose_stamped",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionFK_Response, pose_stamped),  // bytes offset in struct
    NULL,  // default value
    GetPositionFK_Response__rosidl_typesupport_introspection_c__size_function__PoseStamped__pose_stamped,  // size() function pointer
    GetPositionFK_Response__rosidl_typesupport_introspection_c__get_const_function__PoseStamped__pose_stamped,  // get_const(index) function pointer
    GetPositionFK_Response__rosidl_typesupport_introspection_c__get_function__PoseStamped__pose_stamped,  // get(index) function pointer
    GetPositionFK_Response__rosidl_typesupport_introspection_c__resize_function__PoseStamped__pose_stamped  // resize(index) function pointer
  },
  {
    "fk_link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionFK_Response, fk_link_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionFK_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GetPositionFK_Response",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__srv__GetPositionFK_Response),
  GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_member_array,  // message members
  GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_type_support_handle = {
  0,
  &GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionFK_Response)() {
  GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MoveItErrorCodes)();
  if (!GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_type_support_handle.typesupport_identifier) {
    GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPositionFK_Response__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_fk__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_service_members = {
  "moveit_msgs__srv",  // service namespace
  "GetPositionFK",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_service_type_support_handle = {
  0,
  &moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionFK_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionFK_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionFK)() {
  if (!moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionFK_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionFK_Response)()->data;
  }

  return &moveit_msgs__srv__detail__get_position_fk__rosidl_typesupport_introspection_c__GetPositionFK_service_type_support_handle;
}
