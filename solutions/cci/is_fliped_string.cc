/**
 * @file is_fliped_string.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/is_fliped_string.h"

namespace leetcode {
bool SolutionImpl::IsFlipedString(std::string s1, std::string s2) {
  if (s1.size() != s2.size()) return false;
  if (s1.empty() && s2.empty()) return true;

  auto size = s1.size();

  for (auto i = 0ul; i < size; ++i) {
    if (s1[i] == s2.front()) {
      auto j = 0ul;
      for (; j < size; ++j) {
        if (s1[(j + i) % size] != s2[j]) {
          break;
        }
      }
      if (j == size) return true;
    }
  }
  return false;
}
}  // namespace leetcode
