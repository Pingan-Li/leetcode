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

#include "two_sum.h"
namespace leetcode {
std::vector<int> twoSum(std::vector<int> &nums, int target) {
  std::vector<int> ret;
  bool found{false};
  for (size_t i = 0; i < nums.size(); ++i) {
    for (size_t j = i + 1; j < nums.size(); ++j) {
      if (target == nums[i] + nums[j]) {
        ret.push_back(i);
        ret.push_back(j);
        found = true;
        break;
      }
    }
    if (found) {
      break;
    }
  }
  return ret;
}
} // namespace leetcode
