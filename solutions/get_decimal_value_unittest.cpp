/**
 * @file get_decimal_value_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/get_decimal_value.h"

#include <gtest/gtest.h>

namespace leetcode {
TEST(get_decimal_value, case_0) {
  std::vector<int> vec{1};
  ListNode *head = SpawnList(vec);
  int expect = 1;
  int result = GetDecimalValue(head);
  EXPECT_EQ(expect, result);
}

TEST(get_decimal_value, case_1) {
  std::vector<int> vec{};
  ListNode *head = SpawnList(vec);
  int expect = 0;
  int result = GetDecimalValue(head);
  EXPECT_EQ(expect, result);
}

TEST(get_decimal_value, case_2) {
  std::vector<int> vec{1, 0, 1, 0, 1};
  ListNode *head = SpawnList(vec);
  int expect = 21;
  int result = GetDecimalValue(head);
  EXPECT_EQ(expect, result);
}

TEST(get_decimal_value, case_3) {
  std::vector<int> vec{1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
  ListNode *head = SpawnList(vec);
  int expect = 18880;
  int result = GetDecimalValue(head);
  EXPECT_EQ(expect, result);
}
}  // namespace leetcode
