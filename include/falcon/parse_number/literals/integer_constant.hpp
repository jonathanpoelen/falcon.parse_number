#ifndef FALCON_PARSE_NUMBER_LITERALS_INTEGERRAL_CONSTANT_HPP
#define FALCON_PARSE_NUMBER_LITERALS_INTEGERRAL_CONSTANT_HPP

#include "../parse_integral.hpp"


namespace falcon {
inline namespace literals {
///\brief Literal operators for maked std::integral_constant with fundamental types
inline namespace integer_constant_literals
{

  template<char... c> constexpr parse_number::parse_integral<int, c...>
  operator "" _c() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<unsigned int, c...>
  operator "" _uc() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<long, c...>
  operator "" _lc() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<unsigned long, c...>
  operator "" _ulc() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<long long, c...>
  operator "" _llc() { return {}; }

  template<char... c> constexpr parse_number::parse_int<c...>
  operator "" _ullc() { return {}; }

} // inline namespace integer_constant_literals
} // inline namespace literals

namespace parse_number {
  using namespace literals::integer_constant_literals;
} // namespace parse_number

} // namespace falcon

#endif
