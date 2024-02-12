/**
 * @file reverse_print_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "base/auxiliary.h"
#include "solutions/list_node.h"
#include "solutions/reverse_print.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {

TEST(ReversePrint, Case0) {
  std::vector<int> input{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(input);
  PrintList(head);
  std::vector<int> ret = ReversePrint(head);
  base::Print(ret.begin(), ret.end());
}

TEST(ReverSePrint, Case1) {
  std::vector<int> input{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(input);
  PrintList(head);
  std::vector<int> ret = ReversePrint2(head);
  base::Print(ret.begin(), ret.end());
}
} // namespace leetcode