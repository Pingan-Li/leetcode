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

#include "solutions/merge_k_sorted_lists.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(merge_k_sorted_lists, case_0) {
  std::vector<int> list1{1, 2, 3, 4, 5};
  std::vector<int> list2{6, 7, 8, 9, 10};
  std::vector<int> list3{1, 2, 3, 4, 5, 6, 7};
  ListNode *l1 = spawnList(list1);
  ListNode *l2 = spawnList(list2);
  ListNode *l3 = spawnList(list3);
  std::vector<ListNode *> lists{l1, l2, l3};
  printList(l1);
  printList(l2);
  printList(l3);
  ListNode *ret = mergeKSortedLists(lists);
  printList(ret);
}

TEST(merge_k_sorted_lists, case_1) {
  std::vector<ListNode *> lists;
  ListNode *ret = mergeKSortedLists(lists);
}
}  // namespace leetcode
