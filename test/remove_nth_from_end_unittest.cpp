/**
 * @file remove_nth_from_end_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "remove_nth_from_end.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(remove_nth_from_end, case_0) {
  std::vector<int> list{1, 2, 3, 4, 5};
  leetcode::ListNode *head = leetcode::spawnList(list);
  leetcode::printList(head);
  auto result = leetcode::removeNthFromEnd(head, 5);
  leetcode::printList(result);
}