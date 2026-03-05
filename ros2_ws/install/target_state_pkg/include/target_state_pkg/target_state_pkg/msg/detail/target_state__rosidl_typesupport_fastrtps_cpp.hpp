// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from target_state_pkg:msg/TargetState.idl
// generated code does not contain a copyright notice

#ifndef TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "target_state_pkg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "target_state_pkg/msg/detail/target_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace target_state_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_target_state_pkg
cdr_serialize(
  const target_state_pkg::msg::TargetState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_target_state_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  target_state_pkg::msg::TargetState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_target_state_pkg
get_serialized_size(
  const target_state_pkg::msg::TargetState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_target_state_pkg
max_serialized_size_TargetState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace target_state_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_target_state_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, target_state_pkg, msg, TargetState)();

#ifdef __cplusplus
}
#endif

#endif  // TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
