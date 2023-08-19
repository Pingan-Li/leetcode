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

#include "solutions/reverse_list.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(reverse_list, case_0) {
  std::vector<int> vec{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(vec);
  PrintList(head);
  ListNode *ret = ReverseList(head);
  PrintList(ret);
}

TEST(reverse_list, case_1) {
  ListNode *ret = ReverseList(nullptr);
  PrintList(ret);
}

TEST(reverse_list, case_2) {
  std::vector<int> vec{1, 2};
  ListNode *head = SpawnList(vec);
  PrintList(head);
  ListNode *ret = ReverseList(head);
  PrintList(ret);
}

} // namespace leetcode
