/**
 * @file kth_to_last_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/kth_to_last.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(kth_to_last, case_0) {
  ListNode *head = SpawnList(std::vector{1, 2, 3, 4, 5});
  std::cout << KthToLast(head, 1);
}

}  // namespace leetcode
