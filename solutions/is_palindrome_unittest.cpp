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

#include "solutions/is_palindrome.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {

TEST(is_palindrome, case_0) {
  ListNode *head = SpawnList(std::vector<int>{1, 2, 3, 2, 1});
  bool result = IsPalindrome(head);
  EXPECT_TRUE(result);
}

TEST(is_palindrome, case_1) {
  ListNode *head = SpawnList(std::vector<int>{1});
  bool result = IsPalindrome(head);
  EXPECT_TRUE(result);
}

TEST(is_palindrome, case_2) {
  ListNode *head = SpawnList(std::vector<int>{});
  bool result = IsPalindrome(head);
  EXPECT_TRUE(result);
}

TEST(is_palindrome, case_3) {
  ListNode *head = SpawnList(std::vector<int>{1, 2, 3});
  bool result = IsPalindrome(head);
  EXPECT_FALSE(result);
}

}  // namespace leetcode