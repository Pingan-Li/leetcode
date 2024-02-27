/**
 * @file move_zeroes.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/hot100/move_zeroes.h"

#include <utility>

namespace leetcode {
void SolutionImpl::MoveZeroes(std::vector<int>& nums) {
  // auto i = 0;
  // auto j = nums.size() - 1;
  // while (i < j) {
  //   while (nums[i] != 0 && i < j) ++i;
  //   while (nums[j] == 0 && i < j) --j;
  //   std::swap(nums[i], nums[j]);
  // }
  for (auto i = 0; i < nums.size(); ++i) {
    if (nums[i] == 0) {
      for (auto j = i + 1; j < nums.size(); ++j) {
        if (nums[j] != 0) {
          std::swap(nums[i], nums[j]);
          break;
        }
      }
    }
  }
}
}  // namespace leetcode