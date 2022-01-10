/**
 * @file odd_even_list_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "odd_even_list.h"
#include "gtest/gtest.h"

TEST(odd_even_list, case_0) {
  leetcode::ListNode *head =
      leetcode::spawnList(std::vector<int>{1,2,3,3,4,2,1,2,4});
  leetcode::printList(head);
  leetcode::ListNode *ret = leetcode::oddEvenList2(head);
  leetcode::printList(ret);
}