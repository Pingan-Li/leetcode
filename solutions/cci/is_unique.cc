/**
 * @file is_unique.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/is_unique.h"

namespace leetcode {
bool SolutionImpl::IsUniuqe(std::string const& astr) {
  bool bits[26] = {};
  for (auto c : astr) {
    if (bits[c - 'a'] == true)
      return false;
    else
      bits[c - 'a'] = true;
  }
  return true;
}
}  // namespace leetcode