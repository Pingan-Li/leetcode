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

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(reverse_list, case_0) {
  std::vector<int> vec{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(vec);
  PrintList(head);
  ListNode *ret = ReverseList(head);
  PrintList(ret);
}
}  // namespace leetcode
