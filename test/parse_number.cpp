#include "../include/falcon/literals/integer_constant.hpp"
#include "../include/falcon/literals/select_integer_constant.hpp"

template<class T> struct check {};

int main()
{
  using namespace falcon::literals;

#define CHECK(n) check<std::integral_constant<int, n>>{} = check<decltype(n##_c)>{}
  CHECK(0);
  CHECK(1);
  CHECK(12);
  CHECK(123);
  CHECK(100);
  CHECK(123456789);
  CHECK(0xff);
  CHECK(0xFF);
  CHECK(0xFf);
  CHECK(010);
#undef CHECK

// c++14: digit separator and 0b/0B prefix
#define CHECK(n, ...) check<std::integral_constant<unsigned long long, n>>{} = \
  check<falcon::parse_number::parse_int<__VA_ARGS__>>{}
  CHECK(123456789, '1', '2', '\'', '3', '4', '5', '6', '\'', '7', '8', '9');
  CHECK(010, '0', '\'', '1', '0');
  CHECK(010, '0', '1', '\'', '0');
  CHECK(2, '0', 'b', '1', '0');
  CHECK(2, '0', 'B', '1', '0');
  CHECK(294, '0', 'b', '1', '0', '\'', '0', '1', '\'', '0', '0', '\'', '1', '1', '0');
#undef CHECK

#define CHECK(type, n) check<std::integral_constant<type, n>>{} = check<decltype(n##_ic)>{}
  CHECK(unsigned char, 0);
  CHECK(unsigned char, 10);
  CHECK(unsigned char, 127);
  CHECK(unsigned char, 227);
  CHECK(unsigned char, 255);
  CHECK(unsigned short, 256);
#undef CHECK

}
