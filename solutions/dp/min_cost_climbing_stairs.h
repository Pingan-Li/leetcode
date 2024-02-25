/**
 * @file min_cost_climbing_stairs.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_DP_MIN_COST_CLIMBING_STAIRS_H_
#define SOLUTIONS_DP_MIN_COST_CLIMBING_STAIRS_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual int MinCostClimbingStairs(std::vector<int>& cost) = 0;
};

class SolutionImpl : public Solution {
 public:
  int MinCostClimbingStairs(std::vector<int>& cost) override;
};
}  // namespace leetcode
#endif