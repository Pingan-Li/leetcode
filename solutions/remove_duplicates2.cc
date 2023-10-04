/**
 * @file remove_duplicates2.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "solutions/remove_duplicates2.h"
namespace leetcode {
int RemoveDuplicates2(std::vector<int> &nums) {
  int size = nums.size();
  if (size <= 2) {
    return size;
  }
  int slow = 2;
  int fast = 2;
  while (fast < size) {
    if (nums[slow - 2] != nums[fast]) {
      nums[slow] = nums[fast];
      ++slow;
    }
    ++fast;
  }
  nums.erase(nums.begin() + slow, nums.end());
  return nums.size();
}
} // namespace leetcode
