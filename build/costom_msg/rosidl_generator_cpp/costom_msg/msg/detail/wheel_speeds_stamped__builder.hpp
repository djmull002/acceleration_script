// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from costom_msg:msg/WheelSpeedsStamped.idl
// generated code does not contain a copyright notice

#ifndef COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__BUILDER_HPP_
#define COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__BUILDER_HPP_

#include "costom_msg/msg/detail/wheel_speeds_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace costom_msg
{

namespace msg
{

namespace builder
{

class Init_WheelSpeedsStamped_wheelspeeds
{
public:
  Init_WheelSpeedsStamped_wheelspeeds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::costom_msg::msg::WheelSpeedsStamped wheelspeeds(::costom_msg::msg::WheelSpeedsStamped::_wheelspeeds_type arg)
  {
    msg_.wheelspeeds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::costom_msg::msg::WheelSpeedsStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::costom_msg::msg::WheelSpeedsStamped>()
{
  return costom_msg::msg::builder::Init_WheelSpeedsStamped_wheelspeeds();
}

}  // namespace costom_msg

#endif  // COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__BUILDER_HPP_
