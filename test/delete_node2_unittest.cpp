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
namespace leetcode {
TEST(delete_node2, case_0) {
  ListNode *head = spawnList(std::vector<int>{1});
  ListNode *ret = deleteNode2(head, 1);
  printList(ret);
}

TEST(delete_node2, case_1) {
  ListNode *head = spawnList(std::vector<int>{-3, 5, -99});
  ListNode *ret = deleteNode2(head, 1);
  printList(ret);
}
} // namespace leetcode