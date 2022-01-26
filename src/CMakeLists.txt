cmake_minimum_required(VERSION 3.10)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

set(LEETCODE_SOURCE_FILES)
LIST(APPEND LEETCODE_SOURCE_FILES 
  two_sum.cpp
  add_two_numbers.cpp
  list_node.cpp
  length_of_longest_substring.cpp
  longest_common_prefix.cpp
  remove_nth_from_end.cpp
  str_str.cpp
  merge_two_lists.cpp
  merge_k_sorted_lists.cpp
  reverse.cpp
  swap_pairs.cpp
  get_intersection_node.cpp
  delete_duplicates.cpp
  delete_duplicates2.cpp
  reverse_list.cpp
  delete_middle.cpp
  delete_node.cpp
  odd_even_list.cpp
  title_to_number.cpp
  reverse_print.cpp
  delete_node2.cpp
  kth_to_last.cpp
  tree_node.cpp
  pre_order_traversal.cpp
  in_order_traversal.cpp
  post_order_traversal.cpp
  is_palindrome.cpp
  split_list_to_parts.cpp
  has_cycle.cpp
  get_kth_from_end.cpp
  detect_cycle.cpp
  remove_elements.cpp
  convert_to_title.cpp
  get_decimal_value.cpp
  middle_node.cpp
  remove_duplicate_nodes.cpp
  detect_capital_use.cpp
  length_of_last_word.cpp
  reverse_string.cpp
  max_area.cpp
  contains_duplicate.cpp
  max_sub_array.cpp
  merge.cpp
  matrix_reshape.cpp
)

add_library(leetcode SHARED ${LEETCODE_SOURCE_FILES})