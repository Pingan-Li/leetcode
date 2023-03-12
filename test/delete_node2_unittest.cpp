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

#include "solutions/delete_node2.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(delete_node2, case_0) {
  ListNode *head = SpawnList(std::vector<int>{1});
  ListNode *ret = DeleteNode2(head, 1);
  PrintList(ret);
}

TEST(delete_node2, case_1) {
  ListNode *head = SpawnList(std::vector<int>{-3, 5, -99});
  ListNode *ret = DeleteNode2(head, 1);
  PrintList(ret);
}
}  // namespace leetcode