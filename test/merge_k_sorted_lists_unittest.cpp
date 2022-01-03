/**
 * @file merge_k_sorted_lists_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "merge_k_sorted_lists.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(merge_k_sorted_lists, case_0) {
  std::vector<int> list1{1, 2, 3, 4, 5};
  std::vector<int> list2{6, 7, 8, 9, 10};
  std::vector<int> list3{1, 2, 3, 4, 5, 6, 7};
  leetcode::ListNode *l1 = leetcode::spawnList(list1);
  leetcode::ListNode *l2 = leetcode::spawnList(list2);
  leetcode::ListNode *l3 = leetcode::spawnList(list3);
  std::vector<leetcode::ListNode *> lists{l1, l2, l3};
  leetcode::printList(l1);
  leetcode::printList(l2);
  leetcode::printList(l3);
  leetcode::ListNode *ret = leetcode::mergeKSortedLists(lists);
  leetcode::printList(ret);
}

TEST(merge_k_sorted_lists, case_1) {
  std::vector<leetcode::ListNode *> lists;
  leetcode::ListNode *ret = leetcode::mergeKSortedLists(lists);
}