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

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(merge, case_0) {
  std::vector<int> nums1{1, 3, 5, 7, 9};
  std::vector<int> nums2{2, 4, 6, 8, 10};
  Merge(nums1, 5, nums2, 5);
  for (auto iter = nums1.begin(); iter != nums1.end(); ++iter) {
    std::cout << *iter;
  }
}

TEST(merge, case_1) {
  std::vector<int> nums1{1, 3, 5, 7, 9};
  std::vector<int> nums2{};
  Merge(nums1, 5, nums2, 0);
  for (auto iter = nums1.begin(); iter != nums1.end(); ++iter) {
    std::cout << *iter;
  }
}

TEST(merge, case_2) {
  std::vector<int> nums1{1, 3, 5, 7, 9};
  std::vector<int> nums2{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  Merge(nums1, 5, nums2, nums2.size());
  for (auto iter = nums1.begin(); iter != nums1.end(); ++iter) {
    std::cout << *iter;
  }
}

TEST(merge, case_3) {
  std::vector<int> nums1{1, 2, 3, 0, 0, 0};
  std::vector<int> nums2{2, 5, 6};
  Merge(nums1, 3, nums2, 3);
  for (auto iter = nums1.begin(); iter != nums1.end(); ++iter) {
    std::cout << *iter;
  }
}
}  // namespace leetcode
