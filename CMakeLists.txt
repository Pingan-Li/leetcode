cmake_minimum_required(VERSION 3.10)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(3rd_party/googletest-release-1.11.0)

include_directories(src)
include_directories(3rd_party/googletest-release-1.11.0/googletest/include)
include_directories(3rd_party/googletest-release-1.11.0/googlemock/include)
set(LEETCODE_SOURCE_FILES)
LIST(APPEND LEETCODE_SOURCE_FILES 
  src/two_sum.cpp
  src/add_two_numbers.cpp
  src/list_node.cpp
  src/length_of_longest_substring.cpp
)

add_library(leetcode SHARED ${LEETCODE_SOURCE_FILES})

link_libraries(leetcode gtest gmock gtest_main  gmock_main)

add_executable(two_sum_unittest test/two_sum_unittest.cpp)

add_executable(add_two_numbers_unittest test/add_two_numbers_unittest.cpp)

add_executable(length_of_longest_substring_unittest test/length_of_longest_substring_unittest.cpp)