/**
 * @file is_palindrome2.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-09-30
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/is_palindrome2.h"
#include <cctype>
#include <cstddef>

namespace leetcode {

bool IsPalindrome(std::string const &s) {
  std::size_t left = 0;
  std::size_t right = s.size() - 1;
  while (left < right) {
    while (left < right && !std::isalnum(s[left])) {
      ++left;
    }

    while (left < right && !std::isalnum(s[right])) {
      --right;
    }
    if (left < right) {
      if (std::tolower(s[left]) != std::tolower(s[right])) {
        return false;
      }
      ++left;
      --right;
    }
  }
  return true;
}
} // namespace leetcode