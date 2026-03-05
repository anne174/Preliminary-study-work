// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from target_state_pkg:msg/TargetState.idl
// generated code does not contain a copyright notice

#ifndef TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__TRAITS_HPP_
#define TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "target_state_pkg/msg/detail/target_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace target_state_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetState & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace target_state_pkg

namespace rosidl_generator_traits
{

[[deprecated("use target_state_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const target_state_pkg::msg::TargetState & msg,
  std::ostream & out, size_t indentation = 0)
{
  target_state_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use target_state_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const target_state_pkg::msg::TargetState & msg)
{
  return target_state_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<target_state_pkg::msg::TargetState>()
{
  return "target_state_pkg::msg::TargetState";
}

template<>
inline const char * name<target_state_pkg::msg::TargetState>()
{
  return "target_state_pkg/msg/TargetState";
}

template<>
struct has_fixed_size<target_state_pkg::msg::TargetState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<target_state_pkg::msg::TargetState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<target_state_pkg::msg::TargetState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TARGET_STATE_PKG__MSG__DETAIL__TARGET_STATE__TRAITS_HPP_
