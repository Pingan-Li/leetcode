/**
 * @file longest_palindrome.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-30
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/longest_palindrome.h"

#include <cstddef>
#include <iostream>

namespace solutions {
std::string LongestPalindrome(std::string const &str) {
  if (str.size() < 2) {
    return str;
  }
  int length = str.size();
  int slow = 0;
  int fast = 0;
  int hi = 0;
  int lo = 0;

  while (slow < length) {
    int i = slow;
    int j = fast;
    std::cout << "fast : " << fast << std::endl;
    std::cout << "slow : " << slow << std::endl;
    while (i >= 0 && j < length && str[i] == str[j]) {
      --i;
      ++j;
    }
    std::cout << "hi - lo: " << hi - lo << std::endl;
    std::cout << "j - i: " << j - i << std::endl;
    if (hi - lo < j - i) {
      hi = j;
      lo = i;
    }
    if (fast == slow) {
      ++fast;
    } else {
      ++slow;
    }
  }
  return str.substr(lo, hi + 1);
}
}  // namespace solutions
