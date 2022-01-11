/**
 * @file delete_node2_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "delete_node2.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

TEST(delete_node2, case_0) {
  leetcode::ListNode *head =
      leetcode::spawnList(std::vector<int>{1});
  leetcode::ListNode *ret = leetcode::deleteNode2(head, 1);
  leetcode::printList(ret);
}

TEST(delete_node2, case_1) {
  leetcode::ListNode *head =
      leetcode::spawnList(std::vector<int>{-3, 5, -99});
  leetcode::ListNode *ret = leetcode::deleteNode2(head, 1);
  leetcode::printList(ret);
}