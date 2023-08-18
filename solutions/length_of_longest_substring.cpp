/**
 * @file length_of_longest_substring.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-31
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "solutions/length_of_longest_substring.h"

#include <algorithm>
#include <iostream>
#include <unordered_map>

namespace leetcode {

int LengthOfLongestSubstring(const std::string &s) {
  if (s.empty()) {
    return 0;
  }
  int size = s.size();
  int max_length = 0;
  std::unordered_map<char, int> skip_map;
  for (int slow = 0, fast = 0; fast < size; ++fast) {
    if (skip_map[s[fast]]++ != 0)
      while (skip_map[s[slow++]]-- == 1) {
      }
    max_length = std::max(max_length, fast - slow + 1);
  }
  return max_length;
}

} // namespace leetcode
