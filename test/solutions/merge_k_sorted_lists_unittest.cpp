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
#include <tuple>

namespace leetcode {
TEST(merge_k_sorted_lists, case_0) {
  std::vector<int> list1{1, 2, 3, 4, 5};
  std::vector<int> list2{6, 7, 8, 9, 10};
  std::vector<int> list3{1, 2, 3, 4, 5, 6, 7};
  ListNode *l1 = SpawnList(list1);
  ListNode *l2 = SpawnList(list2);
  ListNode *l3 = SpawnList(list3);
  std::vector<ListNode *> lists{l1, l2, l3};
  PrintList(l1);
  PrintList(l2);
  PrintList(l3);
  ListNode *ret = MergeKSortedLists(lists);
  PrintList(ret);
}

TEST(merge_k_sorted_lists, case_1) {
  std::vector<ListNode *> lists;
  ListNode *ret = MergeKSortedLists(lists);
  std::ignore = ret;
}
}  // namespace leetcode
