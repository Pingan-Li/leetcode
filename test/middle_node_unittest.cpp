/**
 * @file middle_node_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/middle_node.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(middle_node_unittest, case_0) {
  ListNode *head = SpawnList(std::vector<int>{1, 2, 3});
  ListNode *result = MiddleNode(head);
  EXPECT_EQ(head->next, result);
}
}  // namespace leetcode
