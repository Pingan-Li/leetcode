/**
 * @file remove_element.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/remove_element.h"

namespace leetcode {
int RemoveElement(std::vector<int> &nums, int val) {
  int slow = 0;
  int fast = 0;
  // move(copy) every element which is not equal to val.
  for (; fast < nums.size(); ++fast) {
    if (nums[fast] != val) {
      nums[slow] = nums[fast];
      slow++;
    }
  }
  nums.erase(nums.begin() + slow, nums.end());
  return nums.size();
}
} // namespace leetcode