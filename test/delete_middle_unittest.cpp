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

#include "delete_middle.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace leetcode {
TEST(delete_middle, case_0) {
  ListNode *head = spawnList(std::vector<int>{2, 1});
  printList(head);
  ListNode *ret = deleteMiddle(head);
  printList(ret);
}

TEST(delete_middle, case_1) {
  ListNode *head = spawnList(std::vector<int>{1, 2, 3});
  printList(head);
  ListNode *ret = deleteMiddle(head);
  printList(ret);
}

TEST(delete_middle, case_2) {
  ListNode *head = spawnList(std::vector<int>{1, 2, 3, 4});
  printList(head);
  ListNode *ret = deleteMiddle(head);
  printList(ret);
}
} // namespace leetcode
