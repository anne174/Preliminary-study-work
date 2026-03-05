// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from target_state_pkg:msg/TargetState.idl
// generated code does not contain a copyright notice

#ifndef TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__BUILDER_HPP_
#define TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "target_state_pkg/msg/detail/target_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace target_state_pkg
{

namespace msg
{

namespace builder
{

class Init_TargetState_y
{
public:
  explicit Init_TargetState_y(::target_state_pkg::msg::TargetState & msg)
  : msg_(msg)
  {}
  ::target_state_pkg::msg::TargetState y(::target_state_pkg::msg::TargetState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::target_state_pkg::msg::TargetState msg_;
};

class Init_TargetState_x
{
public:
  Init_TargetState_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetState_y x(::target_state_pkg::msg::TargetState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TargetState_y(msg_);
  }

private:
  ::target_state_pkg::msg::TargetState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::target_state_pkg::msg::TargetState>()
{
  return target_state_pkg::msg::builder::Init_TargetState_x();
}

}  // namespace target_state_pkg

#endif  // TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__BUILDER_HPP_
