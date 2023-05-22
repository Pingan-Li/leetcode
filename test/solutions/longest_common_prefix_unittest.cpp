/**
 * @file longest_common_prefix_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-01
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/longest_common_prefix.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(longest_common_prefix, case_0) {
  std::vector<std::string> strs;
  strs.push_back("flower");
  strs.push_back("flow");
  strs.push_back("flight");
  auto ret = LongestCommonPrefix(strs);
  std::cout << ret.size();
}

}  // namespace leetcode
