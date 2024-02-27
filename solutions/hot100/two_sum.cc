/**
 * @file two_sum.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/hot100/two_sum.h"

#include <unordered_map>
#include <utility>
#include <vector>

namespace leetcode {
std::vector<int> SolutionImpl::TwoSum(std::vector<int>& nums, int target) {
  std::unordered_map<int, int> lookup_table;
  for (auto i = 0; i < nums.size(); ++i) {
    auto pair = lookup_table.find(target - nums[i]);
    if (pair != lookup_table.end()) {
      return {pair->second, i};
    }
    lookup_table[nums[i]] = i;
  }
  return {};
}
}  // namespace leetcode