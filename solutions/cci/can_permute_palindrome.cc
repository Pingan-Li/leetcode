/**
 * @file can_permute_palindrome.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-02
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/can_permute_palindrome.h"

#include <map>

namespace leetcode {
bool SolutionImpl::CanPermutePalindrome(std::string s) {
  if (s.empty()) return false;
  std::map<char, int> map;
  for (auto c : s) {
    ++map[c];
  }
  if (s.size() % 2 == 0) {
    for (auto&& [k, v] : map) {
      if (v % 2 == 1) return false;
    }
  } else {
    char c = 0;
    for (auto&& [k, v] : map) {
      if (v % 2 == 1) {
        if (c != 0)
          return false;
        else
          c = k;
      }
    }
  }
  return true;
}
}  // namespace leetcode