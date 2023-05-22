/**
 * @file delete_middle.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/delete_middle.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(delete_middle, case_0) {
  ListNode *head = SpawnList(std::vector<int>{2, 1});
  PrintList(head);
  ListNode *ret = DeleteMiddle(head);
  PrintList(ret);
}

TEST(delete_middle, case_1) {
  ListNode *head = SpawnList(std::vector<int>{1, 2, 3});
  PrintList(head);
  ListNode *ret = DeleteMiddle(head);
  PrintList(ret);
}

TEST(delete_middle, case_2) {
  ListNode *head = SpawnList(std::vector<int>{1, 2, 3, 4});
  PrintList(head);
  ListNode *ret = DeleteMiddle(head);
  PrintList(ret);
}
}  // namespace leetcode
