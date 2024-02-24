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

#include "solutions/remove_duplicate_nodes.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(remove_duplicate_nodes, case_0) {
  ListNode *head = SpawnList(std::vector<int>{1, 2, 3, 4, 5, 5, 5, 5, 5, 5});
  ListNode *result = RemoveDuplicateNodes(head);
  ListNode *expect = SpawnList(std::vector<int>{1, 2, 3, 4, 5});
  PrintList(result);
  PrintList(expect);
}

TEST(remove_duplicate_nodes, case_1) {
  ListNode *head = SpawnList(std::vector<int>{5, 5, 5, 5, 5, 5});
  ListNode *result = RemoveDuplicateNodes(head);
  ListNode *expect = SpawnList(std::vector{5});
  PrintList(result);
  PrintList(expect);
}

TEST(remove_duplicate_nodes, case_2) {
  ListNode *head = SpawnList(std::vector<int>{5, 5, 5, 5, 5, 4});
  ListNode *result = RemoveDuplicateNodes(head);
  ListNode *expect = SpawnList(std::vector{5, 4});
  PrintList(result);
  PrintList(expect);
}

TEST(remove_duplicate_nodes, case_3) {
  ListNode *head = SpawnList(std::vector<int>{});
  ListNode *result = RemoveDuplicateNodes(head);
  ListNode *expect = SpawnList(std::vector<int>{});
  PrintList(result);
  PrintList(expect);
}

TEST(remove_duplicate_nodes, case_4) {
  ListNode *head = SpawnList(std::vector<int>{1, 2, 1, 2, 1, 2, 1, 2});
  ListNode *result = RemoveDuplicateNodes(head);
  ListNode *expect = SpawnList(std::vector<int>{1, 2});
  PrintList(result);
  PrintList(expect);
}

}  // namespace leetcode
