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
  src/longest_common_prefix.cpp
  src/remove_nth_from_end.cpp
  src/str_str.cpp
  src/merge_two_lists.cpp
  src/merge_k_sorted_lists.cpp
  src/reverse.cpp
  src/swap_pairs.cpp
  src/get_intersection_node.cpp
  src/delete_duplicates.cpp
  src/delete_duplicates2.cpp
)

add_library(leetcode SHARED ${LEETCODE_SOURCE_FILES})

link_libraries(leetcode gtest gmock gtest_main  gmock_main)

add_executable(two_sum_unittest test/two_sum_unittest.cpp)

add_executable(add_two_numbers_unittest test/add_two_numbers_unittest.cpp)

add_executable(length_of_longest_substring_unittest test/length_of_longest_substring_unittest.cpp)

add_executable(longest_common_prefix_unittest test/longest_common_prefix_unittest.cpp)

add_executable(remove_nth_from_end_unittest test/remove_nth_from_end_unittest.cpp)

add_executable(str_str_unittest test/str_str_unittest.cpp)

add_executable(merge_two_lists_unittests test/merge_two_lists_unittests.cpp)

add_executable(merge_k_sorted_lists_unittest test/merge_k_sorted_lists_unittest.cpp)

add_executable(reverse_unittest test/reverse_unittest.cpp)

add_executable(swap_pairs_unittest test/swap_paris_unittest.cpp)

add_executable(get_intersection_node_unittest test/get_intersection_node_unittest.cpp)

add_executable(delete_duplicates_unittest test/delete_duplicates_unittest.cpp)

add_executable(delete_duplicates2_unittest test/delete_duplicates2_unittest.cpp)