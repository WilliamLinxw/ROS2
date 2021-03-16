// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from moveit_msgs:msg/MotionSequenceRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__FUNCTIONS_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "moveit_msgs/msg/detail/motion_sequence_request__struct.h"

/// Initialize msg/MotionSequenceRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__msg__MotionSequenceRequest
 * )) before or use
 * moveit_msgs__msg__MotionSequenceRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__MotionSequenceRequest__init(moveit_msgs__msg__MotionSequenceRequest * msg);

/// Finalize msg/MotionSequenceRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__MotionSequenceRequest__fini(moveit_msgs__msg__MotionSequenceRequest * msg);

/// Create msg/MotionSequenceRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__msg__MotionSequenceRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__msg__MotionSequenceRequest *
moveit_msgs__msg__MotionSequenceRequest__create();

/// Destroy msg/MotionSequenceRequest message.
/**
 * It calls
 * moveit_msgs__msg__MotionSequenceRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__MotionSequenceRequest__destroy(moveit_msgs__msg__MotionSequenceRequest * msg);


/// Initialize array of msg/MotionSequenceRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__msg__MotionSequenceRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__MotionSequenceRequest__Sequence__init(moveit_msgs__msg__MotionSequenceRequest__Sequence * array, size_t size);

/// Finalize array of msg/MotionSequenceRequest messages.
/**
 * It calls
 * moveit_msgs__msg__MotionSequenceRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__MotionSequenceRequest__Sequence__fini(moveit_msgs__msg__MotionSequenceRequest__Sequence * array);

/// Create array of msg/MotionSequenceRequest messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__msg__MotionSequenceRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__msg__MotionSequenceRequest__Sequence *
moveit_msgs__msg__MotionSequenceRequest__Sequence__create(size_t size);

/// Destroy array of msg/MotionSequenceRequest messages.
/**
 * It calls
 * moveit_msgs__msg__MotionSequenceRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__MotionSequenceRequest__Sequence__destroy(moveit_msgs__msg__MotionSequenceRequest__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_SEQUENCE_REQUEST__FUNCTIONS_H_
