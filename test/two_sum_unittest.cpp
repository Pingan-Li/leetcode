/**
 * @file two_sum_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "solutions/two_sum.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <vector>

namespace leetcode {
TEST(two_sum, case_0) {
  std::vector<int> nums{2, 7, 11, 15};
  int target = 9;
  auto result = twoSum(nums, target);
  std::vector<int> expect{0, 1};
  EXPECT_EQ(result, expect);
}

TEST(two_sum, case_1) {
  std::vector<int> nums{3, 2, 4};
  int target = 6;
  auto result = twoSum(nums, target);
  std::vector<int> expect{1, 2};
  EXPECT_EQ(result, expect);
}

TEST(two_sum, case_2) {
  std::vector<int> nums{3, 3};
  int target = 6;
  auto result = twoSum(nums, target);
  std::vector<int> expect{0, 1};
  EXPECT_EQ(result, expect);
}
}  // namespace leetcode
