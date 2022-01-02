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

TEST(merge_two_lists, case_0) {
  std::vector<int> list1{1,2,3,4,5};
  std::vector<int> list2{6,7,8,9,10};
  leetcode::ListNode *l1 = leetcode::spawnList(list1);
  leetcode::ListNode *l2 = leetcode::spawnList(list2);
  leetcode::printList(l1);
  leetcode::printList(l2);
  leetcode::ListNode *ret = leetcode::mergeTwoLists(l1, l2);
  leetcode::printList(ret);
}
