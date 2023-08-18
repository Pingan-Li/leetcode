/**
 * @file remove_nth_from_end_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/remove_nth_from_end.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(remove_nth_from_end, case_0) {
  std::vector<int> list{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(list);
  PrintList(head);
  auto result = RemoveNthFromEnd(head, 5);
  PrintList(result);
}
TEST(remove_nth_from_end, case_1) {
  std::vector<int> list{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(list);
  PrintList(head);
  auto result = RemoveNthFromEnd(head, 4);
  PrintList(result);
}
TEST(remove_nth_from_end, case_2) {
  std::vector<int> list{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(list);
  PrintList(head);
  auto result = RemoveNthFromEnd(head, 3);
  PrintList(result);
}
TEST(remove_nth_from_end, case_3) {
  std::vector<int> list{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(list);
  PrintList(head);
  auto result = RemoveNthFromEnd(head, 2);
  PrintList(result);
}
TEST(remove_nth_from_end, case_4) {
  std::vector<int> list{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(list);
  PrintList(head);
  auto result = RemoveNthFromEnd(head, 1);
  PrintList(result);
}
TEST(remove_nth_from_end, case_5) {
  std::vector<int> list{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(list);
  PrintList(head);
  auto result = RemoveNthFromEnd(head, 6);
  PrintList(result);
}
} // namespace leetcode
