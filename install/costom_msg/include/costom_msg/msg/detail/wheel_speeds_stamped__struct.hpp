// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from costom_msg:msg/WheelSpeedsStamped.idl
// generated code does not contain a copyright notice

#ifndef COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__STRUCT_HPP_
#define COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__costom_msg__msg__WheelSpeedsStamped __attribute__((deprecated))
#else
# define DEPRECATED__costom_msg__msg__WheelSpeedsStamped __declspec(deprecated)
#endif

namespace costom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelSpeedsStamped_
{
  using Type = WheelSpeedsStamped_<ContainerAllocator>;

  explicit WheelSpeedsStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheelspeeds = 0.0;
    }
  }

  explicit WheelSpeedsStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheelspeeds = 0.0;
    }
  }

  // field types and members
  using _wheelspeeds_type =
    double;
  _wheelspeeds_type wheelspeeds;

  // setters for named parameter idiom
  Type & set__wheelspeeds(
    const double & _arg)
  {
    this->wheelspeeds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__costom_msg__msg__WheelSpeedsStamped
    std::shared_ptr<costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__costom_msg__msg__WheelSpeedsStamped
    std::shared_ptr<costom_msg::msg::WheelSpeedsStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelSpeedsStamped_ & other) const
  {
    if (this->wheelspeeds != other.wheelspeeds) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelSpeedsStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelSpeedsStamped_

// alias to use template instance with default allocator
using WheelSpeedsStamped =
  costom_msg::msg::WheelSpeedsStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace costom_msg

#endif  // COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__STRUCT_HPP_
