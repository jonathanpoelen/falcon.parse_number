#ifndef FALCON_PARSE_NUMBER_PARSE_INTEGRAL_HPP
#define FALCON_PARSE_NUMBER_PARSE_INTEGRAL_HPP

#include <cstdint>

#include "parse_int.hpp"


namespace falcon {
namespace parse_number {

// reject narrowing conversions
template<class Int, class To>
struct checked_convert_to;

#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic error "-Wnarrowing"
template<class T, T N, class To>
struct checked_convert_to<std::integral_constant<T, N>, To>
: std::integral_constant<To, To{N}>
{};
#pragma GCC diagnostic pop
#else
template<class T, T N, class To>
struct checked_convert_to<std::integral_constant<T, N>, To>
: std::integral_constant<To, static_cast<To>(N)>
{
  static_assert(static_cast<T>(checked_convert_to::value) == N
                && (N > T{}
                ? checked_convert_to::value > To{}
                : checked_convert_to::value <= To{}
                ), "norrowing conversion");
};
#endif

template<class Int, class To> using checked_convert_to_t
  = typename checked_convert_to<Int, To>::type;

template<class T, char... Digs>
using parse_integral = checked_convert_to_t<parse_int<Digs...>, T>;

} // namespace parse_number
} // namespace falcon

#endif
