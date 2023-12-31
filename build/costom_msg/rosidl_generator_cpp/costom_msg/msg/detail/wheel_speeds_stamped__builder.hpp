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

class Init_WheelSpeedsStamped_speeds
{
public:
  Init_WheelSpeedsStamped_speeds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::costom_msg::msg::WheelSpeedsStamped speeds(::costom_msg::msg::WheelSpeedsStamped::_speeds_type arg)
  {
    msg_.speeds = std::move(arg);
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
  return costom_msg::msg::builder::Init_WheelSpeedsStamped_speeds();
}

}  // namespace costom_msg

#endif  // COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__BUILDER_HPP_
