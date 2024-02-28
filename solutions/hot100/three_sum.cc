/**
 * @file three_sum.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/hot100/three_sum.h"

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

namespace leetcode {
std::vector<std::vector<int>> SolutionImpl::ThreeSum(std::vector<int> &nums) {
  std::size_t n = nums.size();
  std::sort(nums.begin(), nums.end());
  std::vector<std::vector<int>> result;
  for (size_t i = 0ul; i < n; ++i) {
    if (i > 0ul && nums[i] == nums[i - 1ul]) continue;
    auto j = i + 1ul;
    auto k = n - 1ul;
    int target = -nums[i];
    for (; j < n; ++j) {
      if (j > i + 1ul && nums[j] == nums[j - 1]) continue;
      while (j < k && nums[j] + nums[k] > target) --k;
      if (k == j) break;
      if (nums[j] + nums[k] == target) {
        result.push_back({nums[i], nums[j], nums[k]});
      }
    }
  }
  return result;
}

}  // namespace leetcode