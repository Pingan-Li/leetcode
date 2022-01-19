cmake_minimum_required(VERSION 3.10)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(test)

add_subdirectory(3rd_party/googletest-release-1.11.0)