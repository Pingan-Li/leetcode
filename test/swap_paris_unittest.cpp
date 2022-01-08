/**
 * @file swap_paris_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "list_node.h"
#include "swap_pairs.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
TEST(swap_paris, case_0) {
  std::vector<int> vector{1, 2, 3, 4, 5};
  leetcode::ListNode *list = leetcode::spawnList(vector);
  leetcode::printList(list);
  leetcode::ListNode *ret = leetcode::swapPairs(list);
  leetcode::printList(ret);
}

TEST(swap_paris, case_1) {
  std::vector<int> vector{1};
  leetcode::ListNode *list = leetcode::spawnList(vector);
  leetcode::printList(list);
  leetcode::ListNode *ret = leetcode::swapPairs(list);
  leetcode::printList(ret);
}

TEST(swap_paris, case_2) {
  std::vector<int> vector{1, 2};
  leetcode::ListNode *list = leetcode::spawnList(vector);
  leetcode::printList(list);
  leetcode::ListNode *ret = leetcode::swapPairs(list);
  leetcode::printList(ret);
}
