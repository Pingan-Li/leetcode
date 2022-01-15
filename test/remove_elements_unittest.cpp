/**
 * @file remove_elements_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "remove_elements.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

TEST(remove_elemenets, case_0) {
  leetcode::ListNode *head = leetcode::spawnList(std::vector<int>{
      1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1});
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::removeElements(head, 1);
  leetcode::printList(ret);
}