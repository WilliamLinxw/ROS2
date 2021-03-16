// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:action/ExecuteTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/action/detail/execute_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

bool
moveit_msgs__action__ExecuteTrajectory_Goal__init(moveit_msgs__action__ExecuteTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->trajectory)) {
    moveit_msgs__action__ExecuteTrajectory_Goal__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__ExecuteTrajectory_Goal__fini(moveit_msgs__action__ExecuteTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  moveit_msgs__msg__RobotTrajectory__fini(&msg->trajectory);
}

moveit_msgs__action__ExecuteTrajectory_Goal *
moveit_msgs__action__ExecuteTrajectory_Goal__create()
{
  moveit_msgs__action__ExecuteTrajectory_Goal * msg = (moveit_msgs__action__ExecuteTrajectory_Goal *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__ExecuteTrajectory_Goal));
  bool success = moveit_msgs__action__ExecuteTrajectory_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__ExecuteTrajectory_Goal__destroy(moveit_msgs__action__ExecuteTrajectory_Goal * msg)
{
  if (msg) {
    moveit_msgs__action__ExecuteTrajectory_Goal__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__ExecuteTrajectory_Goal * data = NULL;
  if (size) {
    data = (moveit_msgs__action__ExecuteTrajectory_Goal *)calloc(size, sizeof(moveit_msgs__action__ExecuteTrajectory_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__ExecuteTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__ExecuteTrajectory_Goal__fini(&data[i - 1]);
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
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__ExecuteTrajectory_Goal__fini(&array->data[i]);
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

moveit_msgs__action__ExecuteTrajectory_Goal__Sequence *
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__create(size_t size)
{
  moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array = (moveit_msgs__action__ExecuteTrajectory_Goal__Sequence *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array)
{
  if (array) {
    moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__action__ExecuteTrajectory_Result__init(moveit_msgs__action__ExecuteTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__action__ExecuteTrajectory_Result__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__ExecuteTrajectory_Result__fini(moveit_msgs__action__ExecuteTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

moveit_msgs__action__ExecuteTrajectory_Result *
moveit_msgs__action__ExecuteTrajectory_Result__create()
{
  moveit_msgs__action__ExecuteTrajectory_Result * msg = (moveit_msgs__action__ExecuteTrajectory_Result *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__ExecuteTrajectory_Result));
  bool success = moveit_msgs__action__ExecuteTrajectory_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__ExecuteTrajectory_Result__destroy(moveit_msgs__action__ExecuteTrajectory_Result * msg)
{
  if (msg) {
    moveit_msgs__action__ExecuteTrajectory_Result__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__ExecuteTrajectory_Result * data = NULL;
  if (size) {
    data = (moveit_msgs__action__ExecuteTrajectory_Result *)calloc(size, sizeof(moveit_msgs__action__ExecuteTrajectory_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__ExecuteTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__ExecuteTrajectory_Result__fini(&data[i - 1]);
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
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__ExecuteTrajectory_Result__fini(&array->data[i]);
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

moveit_msgs__action__ExecuteTrajectory_Result__Sequence *
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__create(size_t size)
{
  moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array = (moveit_msgs__action__ExecuteTrajectory_Result__Sequence *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__ExecuteTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array)
{
  if (array) {
    moveit_msgs__action__ExecuteTrajectory_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__action__ExecuteTrajectory_Feedback__init(moveit_msgs__action__ExecuteTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    moveit_msgs__action__ExecuteTrajectory_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__ExecuteTrajectory_Feedback__fini(moveit_msgs__action__ExecuteTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

moveit_msgs__action__ExecuteTrajectory_Feedback *
moveit_msgs__action__ExecuteTrajectory_Feedback__create()
{
  moveit_msgs__action__ExecuteTrajectory_Feedback * msg = (moveit_msgs__action__ExecuteTrajectory_Feedback *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__ExecuteTrajectory_Feedback));
  bool success = moveit_msgs__action__ExecuteTrajectory_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__ExecuteTrajectory_Feedback__destroy(moveit_msgs__action__ExecuteTrajectory_Feedback * msg)
{
  if (msg) {
    moveit_msgs__action__ExecuteTrajectory_Feedback__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__ExecuteTrajectory_Feedback * data = NULL;
  if (size) {
    data = (moveit_msgs__action__ExecuteTrajectory_Feedback *)calloc(size, sizeof(moveit_msgs__action__ExecuteTrajectory_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__ExecuteTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__ExecuteTrajectory_Feedback__fini(&data[i - 1]);
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
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__ExecuteTrajectory_Feedback__fini(&array->data[i]);
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

moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence *
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__create(size_t size)
{
  moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array = (moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array)
{
  if (array) {
    moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"

bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!moveit_msgs__action__ExecuteTrajectory_Goal__init(&msg->goal)) {
    moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  moveit_msgs__action__ExecuteTrajectory_Goal__fini(&msg->goal);
}

moveit_msgs__action__ExecuteTrajectory_SendGoal_Request *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__create()
{
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg = (moveit_msgs__action__ExecuteTrajectory_SendGoal_Request *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request));
  bool success = moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg)
{
  if (msg) {
    moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__action__ExecuteTrajectory_SendGoal_Request *)calloc(size, sizeof(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(&data[i - 1]);
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
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(&array->data[i]);
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

moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array = (moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

moveit_msgs__action__ExecuteTrajectory_SendGoal_Response *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__create()
{
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg = (moveit_msgs__action__ExecuteTrajectory_SendGoal_Response *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response));
  bool success = moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg)
{
  if (msg) {
    moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__action__ExecuteTrajectory_SendGoal_Response *)calloc(size, sizeof(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini(&data[i - 1]);
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
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini(&array->data[i]);
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

moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array = (moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

moveit_msgs__action__ExecuteTrajectory_GetResult_Request *
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__create()
{
  moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg = (moveit_msgs__action__ExecuteTrajectory_GetResult_Request *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__ExecuteTrajectory_GetResult_Request));
  bool success = moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg)
{
  if (msg) {
    moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__ExecuteTrajectory_GetResult_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__action__ExecuteTrajectory_GetResult_Request *)calloc(size, sizeof(moveit_msgs__action__ExecuteTrajectory_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini(&data[i - 1]);
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
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini(&array->data[i]);
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

moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence *
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array = (moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"

bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!moveit_msgs__action__ExecuteTrajectory_Result__init(&msg->result)) {
    moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  moveit_msgs__action__ExecuteTrajectory_Result__fini(&msg->result);
}

moveit_msgs__action__ExecuteTrajectory_GetResult_Response *
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__create()
{
  moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg = (moveit_msgs__action__ExecuteTrajectory_GetResult_Response *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__ExecuteTrajectory_GetResult_Response));
  bool success = moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg)
{
  if (msg) {
    moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__ExecuteTrajectory_GetResult_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__action__ExecuteTrajectory_GetResult_Response *)calloc(size, sizeof(moveit_msgs__action__ExecuteTrajectory_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini(&data[i - 1]);
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
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini(&array->data[i]);
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

moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence *
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array = (moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__functions.h"

bool
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!moveit_msgs__action__ExecuteTrajectory_Feedback__init(&msg->feedback)) {
    moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  moveit_msgs__action__ExecuteTrajectory_Feedback__fini(&msg->feedback);
}

moveit_msgs__action__ExecuteTrajectory_FeedbackMessage *
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__create()
{
  moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg = (moveit_msgs__action__ExecuteTrajectory_FeedbackMessage *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage));
  bool success = moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__destroy(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg)
{
  if (msg) {
    moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__init(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * data = NULL;
  if (size) {
    data = (moveit_msgs__action__ExecuteTrajectory_FeedbackMessage *)calloc(size, sizeof(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(&data[i - 1]);
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
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(&array->data[i]);
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

moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence *
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array = (moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence *)malloc(sizeof(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array)
{
  if (array) {
    moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
