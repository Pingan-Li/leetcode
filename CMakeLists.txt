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
  src/reverse_list.cpp
  src/delete_middle.cpp
  src/delete_node.cpp
  src/odd_even_list.cpp
  src/title_to_number.cpp
  src/reverse_print.cpp
  src/delete_node2.cpp
  src/kth_to_last.cpp
  src/tree_node.cpp
  src/pre_order_traversal.cpp
  src/in_order_traversal.cpp
  src/post_order_traversal.cpp
  src/is_palindrome.cpp
  src/split_list_to_parts.cpp
  src/has_cycle.cpp
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

add_executable(reverse_list_unittest test/reverse_list_unittest.cpp)

add_executable(delete_middle_unittest test/delete_middle_unittest.cpp)

add_executable(delete_node_unittest test/delete_node_unittest.cpp)

add_executable(odd_even_list_unittest test/odd_even_list_unittest.cpp)

add_executable(title_to_number_unittest test/title_to_number_unittest.cpp)

add_executable(reverse_print_unittest test/reverse_print_unittest.cpp)

add_executable(delete_node2_unittest test/delete_node2_unittest.cpp)

add_executable(kth_to_last_unittest test/kth_to_last_unittest.cpp)

add_executable(pre_order_traversal_unittest test/pre_order_traversal_unittest.cpp)

add_executable(in_order_traversal_unittest test/in_order_traversal_unittest.cpp)

add_executable(post_order_traversal_unittest test/post_order_traversal_unittest.cpp)

add_executable(is_palindrome_unittest test/is_palindrome_unittest.cpp)

add_executable(split_list_to_parts_unittest test/split_list_to_parts_unittest.cpp)

add_executable(has_cycle_unittest test/has_cycle_unittest.cpp)