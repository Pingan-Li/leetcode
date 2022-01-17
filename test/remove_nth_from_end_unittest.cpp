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

#include "remove_nth_from_end.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode
{
  TEST(remove_nth_from_end, case_0) {
  std::vector<int> list{1, 2, 3, 4, 5};
   ListNode *head =  spawnList(list);
   printList(head);
  auto result =  removeNthFromEnd(head, 5);
   printList(result);
}
} // namespace leetcode

