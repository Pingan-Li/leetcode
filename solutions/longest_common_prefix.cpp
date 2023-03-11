/**
 * @file longest_common_prefix.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "solutions/longest_common_prefix.h"

namespace leetcode {

std::string longestCommonPrefix(std::vector<std::string> &strs) {
  if (strs.empty()) {
    return {};
  } else {
    size_t minSize{SIZE_MAX};
    size_t minIndex{0};
    // find the shortest string and its size.
    for (size_t i{0}; i < strs.size(); ++i) {
      if (strs[i].size() < minSize) {
        minIndex = i;
        minSize = strs[i].size();
      }
    }
    size_t minLength{SIZE_MAX};
    for (const auto &str : strs) {
      size_t i{0};
      for (; i < minSize; ++i) {
        if (str[i] != strs[minIndex][i]) {
          break;
        }
      }
      if (minLength > i) {
        minLength = i;
      }
    }
    return {strs[minIndex].begin(), strs[minIndex].begin() + minLength};
  }
}

}  // namespace leetcode
