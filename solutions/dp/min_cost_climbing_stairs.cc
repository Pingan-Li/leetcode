/**
 * @file min_cost_climbing_stairs.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/min_cost_climbing_stairs.h"

#include <algorithm>
#include <vector>

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
int SolutionImpl::MinCostClimbingStairs(std::vector<int> &cost) {
  if (cost.empty()) return 0;

  int n = cost.size();
  // dp[i] represents the minimal cost of climbing to i-th stair.
  std::vector<int> dp(n + 1, 0);
  dp[0] = 0;
  dp[1] = 0;
  for (auto i = 2; i <= n; ++i) {
    dp[i] = std::min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
  }
  return dp[n];
}
}  // namespace leetcode