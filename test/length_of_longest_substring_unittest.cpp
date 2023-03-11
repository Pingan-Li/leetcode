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

#include "solutions/length_of_longest_substring.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(length_of_longest_substring, case_0) {
  std::string str{"a"};
  int result = lengthOfLongestSubstring(str);
  int expect = 1;
  EXPECT_EQ(result, expect);
}

TEST(length_of_longest_substring, case_1) {
  std::string str{"aba"};
  int result = lengthOfLongestSubstring(str);
  int expect = 2;
  EXPECT_EQ(result, expect);
}

TEST(length_of_longest_substring, case_3) {
  std::string str{"ababa"};
  int result = lengthOfLongestSubstring(str);
  int expect = 2;
  EXPECT_EQ(result, expect);
}

TEST(length_of_longest_substring, case_4) {
  std::string str{"aaaaaa"};
  int result = lengthOfLongestSubstring(str);
  int expect = 1;
  EXPECT_EQ(result, expect);
}

TEST(length_of_longest_substring, case_5) {
  std::string str{"aaaaaab"};
  int result = lengthOfLongestSubstring(str);
  int expect = 2;
  EXPECT_EQ(result, expect);
}

TEST(length_of_longest_substring, case_6) {
  std::string str{"abbbbbbbbbbb"};
  int result = lengthOfLongestSubstring(str);
  int expect = 2;
  EXPECT_EQ(result, expect);
}

TEST(length_of_longest_substring, case_7) {
  std::string str{"abcdefg"};
  int result = lengthOfLongestSubstring(str);
  int expect = 7;
  EXPECT_EQ(result, expect);
}

}  // namespace leetcode
