// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from status_interfaces:msg/TargetState.idl
// generated code does not contain a copyright notice

#ifndef STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__STRUCT_HPP_
#define STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__status_interfaces__msg__TargetState __attribute__((deprecated))
#else
# define DEPRECATED__status_interfaces__msg__TargetState __declspec(deprecated)
#endif

namespace status_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetState_
{
  using Type = TargetState_<ContainerAllocator>;

  explicit TargetState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit TargetState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    status_interfaces::msg::TargetState_<ContainerAllocator> *;
  using ConstRawPtr =
    const status_interfaces::msg::TargetState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<status_interfaces::msg::TargetState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<status_interfaces::msg::TargetState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      status_interfaces::msg::TargetState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<status_interfaces::msg::TargetState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      status_interfaces::msg::TargetState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<status_interfaces::msg::TargetState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<status_interfaces::msg::TargetState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<status_interfaces::msg::TargetState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__status_interfaces__msg__TargetState
    std::shared_ptr<status_interfaces::msg::TargetState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__status_interfaces__msg__TargetState
    std::shared_ptr<status_interfaces::msg::TargetState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetState_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetState_

// alias to use template instance with default allocator
using TargetState =
  status_interfaces::msg::TargetState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace status_interfaces

#endif  // STATUS_INTERFACES__MSG__DETAIL__TARGET_STATE__STRUCT_HPP_
