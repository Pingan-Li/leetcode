/**
 * @file remove_element_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/remove_element.h"

#include "testing/googletest/include/gtest/gtest.h"
#include <vector>
namespace leetcode {
TEST(RemoveElement, Case0) {
  std::vector<int> nums = {1, 1, 1, 1, 1, 3};
  int result = RemoveElement(nums, 1);
  ASSERT_EQ(result, 1);
}

TEST(RemoveElement, Case1) {
  std::vector<int> nums = {1, 1, 1, 1, 3};
  int result = RemoveElement(nums, 3);
  ASSERT_EQ(result, 4);
}
} // namespace leetcode