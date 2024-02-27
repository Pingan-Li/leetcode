/**
 * @file longest_consecutive.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/hot100/longest_consecutive.h"

#include <algorithm>
#include <unordered_set>
#include <vector>

namespace leetcode {
int SolutionImpl::LongestConsecutive(std::vector<int> &nums) {
  if (nums.empty()) return 0;

  std::unordered_set<int> nums_set(nums.begin(), nums.end());

  int result = 0;
  for (auto n : nums_set) {
    if (!nums_set.contains(n - 1)) {
      int current_num = n;
      int current_length = 1;
      while (nums_set.contains(current_num + 1)) {
        ++current_num;
        ++current_length;
      }
      result = std::max(result, current_length);
    }
  }
  return result;
};
}  // namespace leetcode