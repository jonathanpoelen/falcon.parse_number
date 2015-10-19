#ifndef FALCON_PARSE_NUMBER_LITERALS_SELECT_INTEGER_CONSTANT_HPP
#define FALCON_PARSE_NUMBER_LITERALS_SELECT_INTEGER_CONSTANT_HPP

#include "../select_parse_int.hpp"

namespace falcon {
inline namespace literals {
inline namespace select_integer_constant_literals {

  ///\brief  Literal operators for maked a std::integral_constant with the smallest integer type
  template<char... c> constexpr parse_number::select_parse_int<c...>
  operator "" _ic() { return {}; }

} // inline namespace select_integer_constant_literals
} // inline namespace literals

namespace parse_number {
  using namespace literals::select_integer_constant_literals;
} // namespace parse_number

} // namespace falcon

#endif
