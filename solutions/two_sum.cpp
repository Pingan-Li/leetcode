/**
 * @file two_sum.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "solutions/two_sum.h"

#include <unordered_map>
namespace leetcode {

std::vector<int> TwoSum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> hashmap;
  for (int i = 0; i < nums.size(); ++i) {
    auto iter = hashmap.find(target - nums[i]);
    if (iter != hashmap.end()) {
      return {iter->second, i};
    } else {
      hashmap[nums[i]] = i;
    }
  }
  return {};
}
}  // namespace leetcode
