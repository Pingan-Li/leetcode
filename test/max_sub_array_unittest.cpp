/**
 * @file max_sub_array_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-23
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "solutions/max_sub_array.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(max_sub_array, case_0) {
  std::vector<int> vector{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int result = MaxSubArray(vector);
  EXPECT_EQ(result, 6);
}

TEST(max_sub_array, case_1) {
  std::vector<int> vector{1, 2, 3, 4, 5, 6, 7, 8, 9};
  int result = MaxSubArray(vector);
  EXPECT_EQ(result, 45);
}

TEST(max_sub_array, case_2) {
  std::vector<int> vector{-1, 1, -1, 1, -1, 1};
  int result = MaxSubArray(vector);
  EXPECT_EQ(result, 1);
}
}  // namespace leetcode