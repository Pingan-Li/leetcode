cmake_minimum_required(VERSION 3.10)
project(leetcode)

add_subdirectory(3rd_party/googletest-release-1.11.0)

include_directories(src)
include_directories(3rd_party/googletest-release-1.11.0/googletest/include)
include_directories(3rd_party/googletest-release-1.11.0/googlemock/include)
set(LEETCODE_SOURCE_FILES)
LIST(APPEND LEETCODE_SOURCE_FILES 
  src/two_sum.cpp
)

add_library(leetcode SHARED ${LEETCODE_SOURCE_FILES})

link_libraries(leetcode gtest gtest_main gmock gmock_main)

add_executable(two_sum_unittest test/two_sum_unittest.cpp)
