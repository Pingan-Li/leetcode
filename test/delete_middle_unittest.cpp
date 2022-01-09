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

TEST(delete_middle, case_0) {
  leetcode::ListNode *head = leetcode::spawnList(std::vector<int>{2, 1});
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::deleteMiddle(head);
  leetcode::printList(ret);
}

TEST(delete_middle, case_1) {
  leetcode::ListNode *head = leetcode::spawnList(std::vector<int>{1,2,3});
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::deleteMiddle(head);
  leetcode::printList(ret);
}

TEST(delete_middle, case_2) {
  leetcode::ListNode *head = leetcode::spawnList(std::vector<int>{1,2,3,4});
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::deleteMiddle(head);
  leetcode::printList(ret);
}

