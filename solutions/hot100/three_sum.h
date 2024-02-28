/**
 * @file three_sum.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_HOT100_THREE_SUM_H_
#define SOLUTIONS_HOT100_THREE_SUM_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual std::vector<std::vector<int>> ThreeSum(std::vector<int>& nums) = 0;
};

class SolutionImpl : public Solution {
 public:
  std::vector<std::vector<int>> ThreeSum(std::vector<int>& nums) override;
};

}  // namespace leetcode
#endif