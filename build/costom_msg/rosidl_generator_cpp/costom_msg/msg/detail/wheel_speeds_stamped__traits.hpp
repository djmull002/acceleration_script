// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from costom_msg:msg/WheelSpeedsStamped.idl
// generated code does not contain a copyright notice

#ifndef COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__TRAITS_HPP_
#define COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__TRAITS_HPP_

#include "costom_msg/msg/detail/wheel_speeds_stamped__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const costom_msg::msg::WheelSpeedsStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wheelspeeds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelspeeds: ";
    value_to_yaml(msg.wheelspeeds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const costom_msg::msg::WheelSpeedsStamped & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<costom_msg::msg::WheelSpeedsStamped>()
{
  return "costom_msg::msg::WheelSpeedsStamped";
}

template<>
inline const char * name<costom_msg::msg::WheelSpeedsStamped>()
{
  return "costom_msg/msg/WheelSpeedsStamped";
}

template<>
struct has_fixed_size<costom_msg::msg::WheelSpeedsStamped>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<costom_msg::msg::WheelSpeedsStamped>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<costom_msg::msg::WheelSpeedsStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COSTOM_MSG__MSG__DETAIL__WHEEL_SPEEDS_STAMPED__TRAITS_HPP_
