[![Build Status](https://travis-ci.org/jonathanpoelen/falcon.parse_number.svg?branch=master)](https://travis-ci.org/jonathanpoelen/falcon.parse_number)


# Falcon.Parse_number

Components for compile-time parsing of numbers.

Supports base 2, 8, 10 and 16 and digit separator (`'`).

- `digit<unsigned Base, char Dig>`: Static member valid is a std::false_type when Dig is a digit separator `'\''`, otherwise is a std::true_type. Digit class inherits a `std::integral_constant<unsigned, /*digit converted*/>`.
- `parse_number<unsigned Base, char... Digs>`: Make a `std::integral_constant<unsigned long long, /*number*/>`.
- `parse_int<char... Digs>`: Deducts the base and uses parse_number.
- `parse_integral<class T, char... Digs>`: Checks and converts `parse_int<Digs...>` to `std::integral_constant<T, parse_int<Digs...>::value>`.
- `select_parse_int<char... Digs>`: A std::integral_constant with the smallest integer type


## Literals

``` cpp
namespace falcon::literals {
  inline namespace integer_constant_literals {
    constexpr std::integral_constant< /* int, long or long long */, ...                        > operator "" _c();
    constexpr std::integral_constant< /* unsigned, unsigned long or unsigned long long */, ... > operator "" _uc();

    constexpr std::integral_constant< long int, ...           > operator "" _lc();
    constexpr std::integral_constant< unsigned long, ...      > operator "" _ulc();
    constexpr std::integral_constant< long long int, ...      > operator "" _llc();
    constexpr std::integral_constant< unsigned long long, ... > operator "" _ullc();
  }

  inline namespace select_integer_constant_literals {
    constexpr std::integral_constant< /*smallest_integer_type*/, ... > operator "" _ic();
  }

  inline namespace fixed_integer_constant_literals {
    constexpr std::integral_constant< int8_t, ...         > operator "" _s8();
    constexpr std::integral_constant< int16_t, ...        > operator "" _s16();
    constexpr std::integral_constant< int32_t, ...        > operator "" _s32();
    constexpr std::integral_constant< int64_t, ...        > operator "" _s64();

    constexpr std::integral_constant< uint8_t, ...        > operator "" _s8();
    constexpr std::integral_constant< uint16_t, ...       > operator "" _s16();
    constexpr std::integral_constant< uint32_t, ...       > operator "" _s32();
    constexpr std::integral_constant< uint64_t, ...       > operator "" _s64();

    constexpr std::integral_constant< int_fast8_t, ...    > operator "" _fast8();
    constexpr std::integral_constant< int_fast16_t, ...   > operator "" _fast16();
    constexpr std::integral_constant< int_fast32_t, ...   > operator "" _fast32();
    constexpr std::integral_constant< int_fast64_t, ...   > operator "" _fast64();
    constexpr std::integral_constant< int_fast8_t, ...    > operator "" _sfast8();
    constexpr std::integral_constant< int_fast16_t, ...   > operator "" _sfast16();
    constexpr std::integral_constant< int_fast32_t, ...   > operator "" _sfast32();
    constexpr std::integral_constant< int_fast64_t, ...   > operator "" _sfast64();

    constexpr std::integral_constant< int_least8_t, ...   > operator "" _least8();
    constexpr std::integral_constant< int_least16_t, ...  > operator "" _least16();
    constexpr std::integral_constant< int_least32_t, ...  > operator "" _least32();
    constexpr std::integral_constant< int_least64_t, ...  > operator "" _least64();
    constexpr std::integral_constant< int_least8_t, ...   > operator "" _sleast8();
    constexpr std::integral_constant< int_least16_t, ...  > operator "" _sleast16();
    constexpr std::integral_constant< int_least32_t, ...  > operator "" _sleast32();
    constexpr std::integral_constant< int_least64_t, ...  > operator "" _sleast64();

    constexpr std::integral_constant< uint_fast8_t, ...   > operator "" _ufast8();
    constexpr std::integral_constant< uint_fast16_t, ...  > operator "" _ufast16();
    constexpr std::integral_constant< uint_fast32_t, ...  > operator "" _ufast32();
    constexpr std::integral_constant< uint_fast64_t, ...  > operator "" _ufast64();

    constexpr std::integral_constant< uint_least8_t, ...  > operator "" _uleast8();
    constexpr std::integral_constant< uint_least16_t, ... > operator "" _uleast16();
    constexpr std::integral_constant< uint_least32_t, ... > operator "" _uleast32();
    constexpr std::integral_constant< uint_least64_t, ... > operator "" _uleast64();
  }
}

namespace falcon::parse_number {
  using namespace literals;
}
```
