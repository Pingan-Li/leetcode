/**
 * @file remove_duplicates_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "solutions/remove_duplicates.h"

#include "testing/googletest/include/gtest/gtest.h"
#include <vector>

namespace leetcode {
TEST(RemoveDuplicates, Case0) {
  std::vector<int> nums = {1, 1, 1, 1, 1, 1, 1};
  int result = RemoveDuplicates(nums);
  for (auto &&num : nums) {
    std::cout << num << ", ";
  }
  int expect = 2;
  ASSERT_EQ(result, expect);
}

TEST(RemoveDuplicates, Case1) {
  std::vector<int> nums = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4};
  int result = RemoveDuplicates(nums);
  for (auto &&num : nums) {
    std::cout << num << ", ";
  }
  int expect = 8;
  ASSERT_EQ(result, expect);
}
} // namespace leetcode