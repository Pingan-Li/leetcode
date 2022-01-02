/**
 * @file length_of_longest_substring_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-31
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "length_of_longest_substring.h"

TEST(length_of_longest_substring, case_0) {
  std::string str{"aabbcc"};
  int result = leetcode::lengthOfLongestSubstring(str);
  std::cout << result;
}
