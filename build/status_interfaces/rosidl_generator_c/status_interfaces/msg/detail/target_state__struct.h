// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from status_interfaces:msg/TargetState.idl
// generated code does not contain a copyright notice

#ifndef STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__STRUCT_H_
#define STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TargetState in the package status_interfaces.
typedef struct status_interfaces__msg__TargetState
{
  double x;
  double y;
} status_interfaces__msg__TargetState;

// Struct for a sequence of status_interfaces__msg__TargetState.
typedef struct status_interfaces__msg__TargetState__Sequence
{
  status_interfaces__msg__TargetState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} status_interfaces__msg__TargetState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__STRUCT_H_
