/**
 * @file reverse_list_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "reverse_list.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

TEST(reverse_list, case_0) {
  std::vector<int> vec{1, 2, 3, 4, 5};
  leetcode::ListNode *head = leetcode::spawnList(vec);
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::reverseList(head);
  leetcode::printList(ret);
}