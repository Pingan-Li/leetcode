/**
 * @file is_subsequence.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/is_subsequence.h"

#include <cstddef>

namespace leetcode {
bool IsSubsequence(std::string const &s, std::string const &t) {
  if (s.empty()) {
    return true;
  }
  for (std::size_t i = 0, j = 0; i < t.size(); ++i) {
    if (t[i] == s[j]) {
      if ((++j) >= s.size())
        return true;
    }
  }
  return false;
}
} // namespace leetcode