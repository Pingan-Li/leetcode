/**
 * @file merge_two_lists_unittests.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-02
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "merge_two_lists.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace leetcode {
TEST(merge_two_lists, case_0) {
  std::vector<int> list1{1, 2, 3, 4, 5};
  std::vector<int> list2{6, 7, 8, 9, 10};
  ListNode *l1 = spawnList(list1);
  ListNode *l2 = spawnList(list2);
  printList(l1);
  printList(l2);
  ListNode *ret = mergeTwoLists(l1, l2);
  printList(ret);
}

} // namespace leetcode
