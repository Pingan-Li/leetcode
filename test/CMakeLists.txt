cmake_minimum_required(VERSION 3.10)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/src)

include_directories(${CMAKE_SOURCE_DIR}/3rd_party/googletest-release-1.11.0/googletest/include)

include_directories(${CMAKE_SOURCE_DIR}/3rd_party/googletest-release-1.11.0/googlemock/include)

link_libraries(leetcode gtest gmock gtest_main  gmock_main)

add_executable(two_sum_unittest  two_sum_unittest.cpp)

add_executable(add_two_numbers_unittest add_two_numbers_unittest.cpp)

add_executable(length_of_longest_substring_unittest  length_of_longest_substring_unittest.cpp)

add_executable(longest_common_prefix_unittest  longest_common_prefix_unittest.cpp)

add_executable(remove_nth_from_end_unittest  remove_nth_from_end_unittest.cpp)

add_executable(str_str_unittest  str_str_unittest.cpp)

add_executable(merge_two_lists_unittests  merge_two_lists_unittests.cpp)

add_executable(merge_k_sorted_lists_unittest  merge_k_sorted_lists_unittest.cpp)

add_executable(reverse_unittest  reverse_unittest.cpp)

add_executable(swap_pairs_unittest  swap_paris_unittest.cpp)

add_executable(get_intersection_node_unittest  get_intersection_node_unittest.cpp)

add_executable(delete_duplicates_unittest  delete_duplicates_unittest.cpp)

add_executable(delete_duplicates2_unittest  delete_duplicates2_unittest.cpp)

add_executable(reverse_list_unittest  reverse_list_unittest.cpp)

add_executable(delete_middle_unittest  delete_middle_unittest.cpp)

add_executable(delete_node_unittest  delete_node_unittest.cpp)

add_executable(odd_even_list_unittest  odd_even_list_unittest.cpp)

add_executable(title_to_number_unittest  title_to_number_unittest.cpp)

add_executable(reverse_print_unittest  reverse_print_unittest.cpp)

add_executable(delete_node2_unittest  delete_node2_unittest.cpp)

add_executable(kth_to_last_unittest  kth_to_last_unittest.cpp)

add_executable(pre_order_traversal_unittest  pre_order_traversal_unittest.cpp)

add_executable(in_order_traversal_unittest  in_order_traversal_unittest.cpp)

add_executable(post_order_traversal_unittest  post_order_traversal_unittest.cpp)

add_executable(is_palindrome_unittest  is_palindrome_unittest.cpp)

add_executable(split_list_to_parts_unittest  split_list_to_parts_unittest.cpp)

add_executable(has_cycle_unittest  has_cycle_unittest.cpp)

add_executable(get_kth_from_end_unittest  get_kth_from_end_unittest.cpp)

add_executable(detect_cycle_unittest  detect_cycle_unittest.cpp)

add_executable(remove_elements_unittest  remove_elements_unittest.cpp)

add_executable(conver_to_title_unittest  convert_to_title_unittest.cpp)

add_executable(get_decimal_value_unittest  get_decimal_value_unittest.cpp)

add_executable(middle_node_unittest middle_node_unittest.cpp)

add_executable(remove_duplicate_nodes remove_duplicate_nodes_unittest.cpp)

add_executable(detect_capital_use_unittest detect_capital_use_unittest.cpp)