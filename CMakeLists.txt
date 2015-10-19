project(Falcon.Parse_int)

cmake_minimum_required(VERSION 2.8)

include(CMakeDefinitions.txt)
include_directories(.)
#add_definitions(-g)

add_executable(parse_number_test test/parse_number.cpp)

# add_subdirectory(tests)

# enable_testing()
