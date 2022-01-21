/**
 * @file remove_duplicate_nodes_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "remove_duplicate_nodes.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
namespace leetcode {
TEST(remove_duplicate_nodes, case_0) {
  ListNode *head = spawnList(std::vector<int>{1, 2, 3, 4, 5, 5, 5, 5, 5, 5});
  ListNode *result = removeDuplicateNodes(head);
  ListNode *expect = spawnList(std::vector<int>{1,2,3,4,5});
  printList(result);
  printList(expect);
}

TEST(remove_duplicate_nodes, case_1) {
  ListNode *head = spawnList(std::vector<int>{5, 5, 5, 5, 5, 5});
  ListNode *result = removeDuplicateNodes(head);
  ListNode *expect = spawnList(std::vector{5});
  printList(result);
  printList(expect);
}

TEST(remove_duplicate_nodes, case_2) {
  ListNode *head = spawnList(std::vector<int>{5, 5, 5, 5, 5, 4});
  ListNode *result = removeDuplicateNodes(head);
  ListNode *expect = spawnList(std::vector{5,4});
  printList(result);
  printList(expect);
}

TEST(remove_duplicate_nodes, case_3) {
  ListNode *head = spawnList(std::vector<int>{});
  ListNode *result = removeDuplicateNodes(head);
  ListNode *expect = spawnList(std::vector<int>{});
  printList(result);
  printList(expect);
}

TEST(remove_duplicate_nodes, case_4) {
  ListNode *head = spawnList(std::vector<int>{1,2,1,2,1,2,1,2});
  ListNode *result = removeDuplicateNodes(head);
  ListNode *expect = spawnList(std::vector<int>{1,2});
  printList(result);
  printList(expect);
}
} // namespace leetcode
