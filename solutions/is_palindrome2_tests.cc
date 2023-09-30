/**
 * @file is_palindrome2_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-09-30
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/is_palindrome2.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(IsPalindrome, case0) {
  std::string s = "AEIOU";
  ASSERT_FALSE(IsPalindrome(s));
}
TEST(IsPalindrome, case1) {
  std::string s = "AEIea";
  ASSERT_TRUE(IsPalindrome(s));
}
TEST(IsPalindrome, case3) {
  std::string s = "a             b  d cd  b   a";
  ASSERT_TRUE(IsPalindrome(s));
}
TEST(IsPalindrome, case4) {
  std::string s = "a        c     b  d cd  b   a";
  ASSERT_FALSE(IsPalindrome(s));
}
TEST(IsPalindrome, case5) {
  std::string s = "";
  ASSERT_FALSE(IsPalindrome(s));
}
} // namespace leetcode