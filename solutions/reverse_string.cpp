/**
 * @file reverse_string.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/reverse_string.h"

namespace leetcode {

void ReverseString(std::vector<char> &s) {
  if (s.empty()) {
    return;
  }
  std::size_t i = 0;
  std::size_t j = s.size() - 1;
  while (i < j) {
    std::swap(s[i++], s[j--]);
  }
}

} // namespace leetcode
