/**
 * @file delete_node_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/delete_node.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(delete_node, case_0) {
  ListNode *head = spawnList(std::vector<int>{4, 1, 5, 9});
  printList(head);
  deleteNode(head->next);
  printList(head);
}

}  // namespace leetcode
