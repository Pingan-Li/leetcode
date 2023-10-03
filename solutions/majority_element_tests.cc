/**
 * @file majority_element_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/majority_element.h"

#include "testing/googletest/include/gtest/gtest.h"
#include <vector>

namespace leetcode {
TEST(MajorityElement, Case0) {
  std::vector<int> nums = {3, 2, 3};
  int result = MajorityElement(nums);
  int expect = 3;
  EXPECT_EQ(result, expect);
}
TEST(MajorityElement, Case1) {
  std::vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1};
  int result = MajorityElement(nums);
  int expect = 1;
  EXPECT_EQ(result, expect);
}
} // namespace leetcode