/**
 * @file split_list_to_parts_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/split_list_to_parts.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(split_list_to_parts, case_0) {
  ListNode *head = spawnList(std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
  std::vector<ListNode *> subLists = splitListToParts(head, 4);
  for (auto iter = subLists.begin(); iter != subLists.end(); ++iter) {
    printList(*iter);
  }
}

TEST(split_list_to_parts, case_1) {
  ListNode *head = spawnList(std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
  std::vector<ListNode *> subLists = splitListToParts(head, 3);
  for (auto iter = subLists.begin(); iter != subLists.end(); ++iter) {
    printList(*iter);
  }
}
}  // namespace leetcode
