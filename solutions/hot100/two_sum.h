/**
 * @file two_sum.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_HOT100_TWO_SUM_H_
#define SOLUTIONS_HOT100_TWO_SUM_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual std::vector<int> TwoSum(std::vector<int>& nums, int target) = 0;
};

class SolutionImpl : public Solution {
 public:
  std::vector<int> TwoSum(std::vector<int>& nums, int target) override;
};
}  // namespace leetcode
#endif