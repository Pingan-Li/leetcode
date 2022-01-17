/**
 * @file is_palindrome_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "is_palindrome.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
namespace leetcode {
TEST(is_palindrome, case_0) {
  ListNode *head = spawnList(std::vector<int>{1, 2, 3, 2, 1});
  bool result = isPalindrome(head);
  EXPECT_TRUE(result);
}

TEST(is_palindrome, case_1) {
  ListNode *head = spawnList(std::vector<int>{1});
  bool result = isPalindrome(head);
  EXPECT_TRUE(result);
}

TEST(is_palindrome, case_2) {
  ListNode *head = spawnList(std::vector<int>{});
  bool result = isPalindrome(head);
  EXPECT_TRUE(result);
}

TEST(is_palindrome, case_3) {
  ListNode *head = spawnList(std::vector<int>{1, 2, 3});
  bool result = isPalindrome(head);
  EXPECT_FALSE(result);
}
} // namespace leetcode