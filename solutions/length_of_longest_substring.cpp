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

#include <set>

namespace leetcode {

int lengthOfLongestSubstring(const std::string &string) {
  if (string.empty()) {
    return 0;
  } else {
    int maxLen{1};
    std::set<char> charSet;
    for (auto iter = string.begin(); iter != string.end(); ++iter) {
      int currLen{1};
      charSet.insert(*iter);
      for (auto iter2 = iter + 1; iter2 != string.end(); ++iter2) {
        auto pair = charSet.insert(*iter2);
        if (pair.second) {
          ++currLen;
        } else {
          break;
        }
      }
      if (maxLen < currLen) {
        maxLen = currLen;
      }
      charSet.clear();
    }
    return maxLen;
  }
}

} // namespace leetcode
