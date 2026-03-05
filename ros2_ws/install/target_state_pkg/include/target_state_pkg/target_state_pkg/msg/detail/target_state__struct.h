// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from target_state_pkg:msg/TargetState.idl
// generated code does not contain a copyright notice

#ifndef TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__STRUCT_H_
#define TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TargetState in the package target_state_pkg.
typedef struct target_state_pkg__msg__TargetState
{
  double x;
  double y;
} target_state_pkg__msg__TargetState;

// Struct for a sequence of target_state_pkg__msg__TargetState.
typedef struct target_state_pkg__msg__TargetState__Sequence
{
  target_state_pkg__msg__TargetState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} target_state_pkg__msg__TargetState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__STRUCT_H_
