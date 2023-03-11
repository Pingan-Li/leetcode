/**
 * @file delete_duplicates_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/delete_duplicates.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(delete_duplicates, case_0) {
  std::vector<int> vector{1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 4, 4, 4, 4, 5, 5,
                          5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 9, 9};
  ListNode *head = spawnList(vector);
  printList(head);
  deleteDuplicates(head);
  printList(head);
}

}  // namespace leetcode
