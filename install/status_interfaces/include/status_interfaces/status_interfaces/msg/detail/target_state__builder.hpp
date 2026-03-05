// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from status_interfaces:msg/TargetState.idl
// generated code does not contain a copyright notice

#ifndef STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__BUILDER_HPP_
#define STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "status_interfaces/msg/detail/target_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace status_interfaces
{

namespace msg
{

namespace builder
{

class Init_TargetState_y
{
public:
  explicit Init_TargetState_y(::status_interfaces::msg::TargetState & msg)
  : msg_(msg)
  {}
  ::status_interfaces::msg::TargetState y(::status_interfaces::msg::TargetState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::status_interfaces::msg::TargetState msg_;
};

class Init_TargetState_x
{
public:
  Init_TargetState_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetState_y x(::status_interfaces::msg::TargetState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TargetState_y(msg_);
  }

private:
  ::status_interfaces::msg::TargetState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::status_interfaces::msg::TargetState>()
{
  return status_interfaces::msg::builder::Init_TargetState_x();
}

}  // namespace status_interfaces

#endif  // STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__BUILDER_HPP_
