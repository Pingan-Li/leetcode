/**
 * @file remove_duplicates.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/remove_duplicates.h"

namespace leetcode {
int RemoveDuplicates(std::vector<int> &nums) {
  int n = nums.size();
  if (n == 0) {
    return 0;
  }
  int fast = 1, slow = 1;
  while (fast < n) {
    if (nums[fast] != nums[fast - 1]) {
      nums[slow] = nums[fast];
      ++slow;
    }
    ++fast;
  }
  nums.erase(nums.begin() + slow, nums.end());
  return nums.size();
}
} // namespace leetcode