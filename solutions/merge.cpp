/**
 * @file merge.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/merge.h"

#include <algorithm>

namespace leetcode {

void Merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
  for (int i = 0; i != n; ++i) {
    nums1[m + i] = nums2[i];
  }
  std::sort(nums1.begin(), nums1.end());
}

}  // namespace leetcode
