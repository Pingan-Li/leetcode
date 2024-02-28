/**
 * @file check_permutation.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/check_permutation.h"

#include <map>
#include <utility>

namespace leetcode {
bool SolutionImpl::CheckPermutation(const std::string &s1,
                                    const std::string &s2) {
  if (s1.empty() or s2.empty()) return false;
  if (s1.size() != s2.size()) return false;

  std::map<char, int> m1;
  std::map<char, int> m2;

  for (auto i = 0; i < s1.size(); ++i) {
    auto c = s1[i];
    auto iter = m1.find(c);
    if (iter == m1.end()) {
      m1[c] = 1;
    } else {
      ++(m1[c]);
    }

    c = s2[i];
    iter = m2.find(c);
    if (iter == m2.end()) {
      m2[c] = 1;
    } else {
      ++(m2[c]);
    }
  }

  return m1 == m2;
}
}  // namespace leetcode