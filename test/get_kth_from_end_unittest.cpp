/**
 * @file get_kth_from_end_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "get_kth_from_end.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
namespace leetcode {
TEST(get_kth_from_end, case_0) {
  ListNode *head = spawnList(std::vector<int>{1, 2, 3, 4, 5});
  printList(getKthFromEnd(head, 2));
}
} // namespace leetcode
