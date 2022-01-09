/**
 * @file delete_duplicates2_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "delete_duplicates2.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "list_node.h"
TEST(delete_duplicates2, case_0) {
  std::vector<int> vecotr{};
  leetcode::ListNode *head = leetcode::spawnList(vecotr);
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::deleteDuplicates2(head);
  leetcode::printList(ret);
}

TEST(delete_duplicates2, case_1) {
  std::vector<int> vecotr{1,2,2,2,2,2,2,3};
  leetcode::ListNode *head = leetcode::spawnList(vecotr);
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::deleteDuplicates2(head);
  leetcode::printList(ret);
}

TEST(delete_duplicates2, case_3) {
  std::vector<int> vecotr{1};
  leetcode::ListNode *head = leetcode::spawnList(vecotr);
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::deleteDuplicates2(head);
  leetcode::printList(ret);
}

TEST(delete_duplicates2, case_4) {
  std::vector<int> vecotr{1};
  leetcode::ListNode *head = leetcode::spawnList(vecotr);
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::deleteDuplicates2(head);
  leetcode::printList(ret);
}