/**
 * @file is_subsequence_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/is_subsequence.h"
#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {

TEST(IsSubsequence, Case0) {
  std::string s = "abc";
  std::string t = "ahbgdc";
  bool result = IsSubsequence(s, t);
  bool expect = true;
  EXPECT_EQ(result, expect);
}

TEST(IsSubsequence, Case1) {
  std::string s = "";
  std::string t = "ahbgdc";
  bool result = IsSubsequence(s, t);
  bool expect = true;
  EXPECT_EQ(result, expect);
}

} // namespace leetcode