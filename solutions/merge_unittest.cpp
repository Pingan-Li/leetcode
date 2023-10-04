/**
 * @file merge_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/merge.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(merge, Case0) {
  std::vector<int> nums1{1, 2, 3, 0, 0, 0};
  std::vector<int> nums2{2, 5, 6};
  Merge(nums1, 3, nums2, 3);
  for (auto iter = nums1.begin(); iter != nums1.end(); ++iter) {
    std::cout << *iter;
  }
}

TEST(merge, Case1) {
  std::vector<int> nums1{1, 2, 3, 0, 0, 0};
  std::vector<int> nums2{1, 1, 1};
  Merge(nums1, 3, nums2, 3);
  for (auto iter = nums1.begin(); iter != nums1.end(); ++iter) {
    std::cout << *iter;
  }
}

TEST(merge, Case2) {
  std::vector<int> nums1{1, 1, 1, 0, 0, 0};
  std::vector<int> nums2{1, 1, 1};
  Merge(nums1, 3, nums2, 3);
  for (auto iter = nums1.begin(); iter != nums1.end(); ++iter) {
    std::cout << *iter;
  }
}
} // namespace leetcode
