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

#include <cstddef>
#include <set>

namespace leetcode {

int LengthOfLongestSubstring(const std::string &s) {
  if (s.empty()) {
    return 0;
  }

  int max_length = 1;
  std::set<char> char_set;
  for (std::size_t i = 0; i < s.size(); ++i) {
    int curr_len = 1;
    char_set.insert(s.at(i));
    for (std::size_t j = i + 1; j < s.size(); ++j) {
      auto pair = char_set.insert(s.at(j));
      if (pair.second) {
        ++curr_len;
      } else {
        break;
      }
    }
    if (max_length < curr_len) {
      max_length = curr_len;
    }
    char_set.clear();
  }
  return max_length;
}

} // namespace leetcode
