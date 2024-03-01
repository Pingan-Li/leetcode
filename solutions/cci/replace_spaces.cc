/**
 * @file replace_spaces.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-01
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/replace_spaces.h"

namespace leetcode {

std::string SolutionImpl::ReplaceSpaces(std::string S, int length) {
  if (S.empty()) return {};
  std::string result;
  for (std::size_t i = 0ul; i < length; ++i) {
    if (S[i] == ' ') {
      result.append("%20");
    } else {
      result.push_back(S[i]);
    }
  }
  return result;
}
}  // namespace leetcode