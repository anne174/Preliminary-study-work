// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from status_interfaces:msg/TargetState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "status_interfaces/msg/detail/target_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace status_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TargetState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) status_interfaces::msg::TargetState(_init);
}

void TargetState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<status_interfaces::msg::TargetState *>(message_memory);
  typed_message->~TargetState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TargetState_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(status_interfaces::msg::TargetState, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(status_interfaces::msg::TargetState, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TargetState_message_members = {
  "status_interfaces::msg",  // message namespace
  "TargetState",  // message name
  2,  // number of fields
  sizeof(status_interfaces::msg::TargetState),
  TargetState_message_member_array,  // message members
  TargetState_init_function,  // function to initialize message memory (memory has to be allocated)
  TargetState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TargetState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TargetState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace status_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<status_interfaces::msg::TargetState>()
{
  return &::status_interfaces::msg::rosidl_typesupport_introspection_cpp::TargetState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, status_interfaces, msg, TargetState)() {
  return &::status_interfaces::msg::rosidl_typesupport_introspection_cpp::TargetState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
