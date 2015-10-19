#ifndef FALCON_PARSE_NUMBER_LITERALS_FIXED_INTEGER_CONSTANT_HPP
#define FALCON_PARSE_NUMBER_LITERALS_FIXED_INTEGER_CONSTANT_HPP

#include "../parse_integral.hpp"


namespace falcon {
inline namespace literals {
///\brief  Literal operators for maked std::integral_constant with fixed width integer types
inline namespace fixed_integer_constant_literals {

  template<char... c> constexpr parse_number::parse_integral<int8_t, c...>
  operator "" _s8() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint8_t, c...>
  operator "" _u8() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_fast8_t, c...>
  operator "" _fast8() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_fast8_t, c...>
  operator "" _sfast8() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_fast8_t, c...>
  operator "" _ufast8() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_least8_t, c...>
  operator "" _least8() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_least8_t, c...>
  operator "" _uleast8() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_least8_t, c...>
  operator "" _suleast8() { return {}; }


  template<char... c> constexpr parse_number::parse_integral<int16_t, c...>
  operator "" _s16() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint16_t, c...>
  operator "" _u16() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_fast16_t, c...>
  operator "" _fast16() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_fast16_t, c...>
  operator "" _sfast16() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_fast16_t, c...>
  operator "" _ufast16() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_least16_t, c...>
  operator "" _least16() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_least16_t, c...>
  operator "" _uleast16() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_least16_t, c...>
  operator "" _suleast16() { return {}; }


  template<char... c> constexpr parse_number::parse_integral<int32_t, c...>
  operator "" _s32() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint32_t, c...>
  operator "" _u32() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_fast32_t, c...>
  operator "" _fast32() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_fast32_t, c...>
  operator "" _sfast32() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_fast32_t, c...>
  operator "" _ufast32() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_least32_t, c...>
  operator "" _least32() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_least32_t, c...>
  operator "" _uleast32() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_least32_t, c...>
  operator "" _suleast32() { return {}; }


  template<char... c> constexpr parse_number::parse_integral<int64_t, c...>
  operator "" _s64() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint64_t, c...>
  operator "" _u64() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_fast64_t, c...>
  operator "" _fast64() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_fast64_t, c...>
  operator "" _sfast64() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_fast64_t, c...>
  operator "" _ufast64() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<int_least64_t, c...>
  operator "" _least64() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_least64_t, c...>
  operator "" _uleast64() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uint_least64_t, c...>
  operator "" _suleast64() { return {}; }


  template<char... c> constexpr parse_number::parse_integral<intmax_t, c...>
  operator "" _smax() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<intptr_t, c...>
  operator "" _sptr() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uintmax_t, c...>
  operator "" _umax() { return {}; }

  template<char... c> constexpr parse_number::parse_integral<uintptr_t, c...>
  operator "" _uptr() { return {}; }

} // inline namespace fixed_integer_constant_literals
} // inline namespace literals

namespace parse_number {
  using namespace literals::fixed_integer_constant_literals;
} // namespace parse_number

} // namespace falcon

#endif
