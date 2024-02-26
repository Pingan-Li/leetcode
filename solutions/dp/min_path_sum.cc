/**
 * @file min_path_sum.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-26
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/min_path_sum.h"

#include <algorithm>
#include <cstring>
#include <vector>

namespace leetcode {
int SolutionImpl::MinPathSum(std::vector<std::vector<int>> &grid) {
  if (grid.empty()) return 0;
  auto m = grid.size();
  auto n = grid.front().size();

  std::vector<int> r(n, 0);
  std::vector<std::vector<int>> dp;
  for (auto i = 0; i < m; ++i) {
    dp.push_back(r);
  }

  dp[0][0] = grid[0][0];
  for (auto i = 1; i < m; ++i) {
    // Accumulate.
    dp[i][0] += grid[i][0] + dp[i - 1][0];
  }
  for (auto j = 1; j < n; ++j) {
    // Accumulate.
    dp[0][j] += grid[0][j] + dp[0][j - 1];
  }

  for (auto i = 1; i < m; ++i) {
    for (auto j = 1; j < n; ++j) {
      dp[i][j] = std::min(dp[i - 1][j] + grid[i][j], dp[i][j - 1] + grid[i][j]);
    }
  }
  return dp.back().back();
  ;
}
}  // namespace leetcode