/**
 * @file unique_paths_with_obstacles.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/unique_paths_with_obstacles.h"

#include <iostream>
#include <vector>

namespace leetcode {
int SolutionImpl::UniquePathsWithObstacles(
    std::vector<std::vector<int>> &obstacle_grid) {
  if (obstacle_grid.empty()) return 0;

  auto m = obstacle_grid.size();
  auto n = obstacle_grid.size();

  std::vector<int> r(n, 0);
  std::vector<std::vector<int>> dp;
  for (auto i = 0; i < m; ++i) {
    dp.push_back(r);
  }

  bool blocked = false;
  for (auto i = 0; i < m; ++i) {
    if (obstacle_grid[i][0] == 1) blocked = true;
    if (blocked) {
      dp[i][0] = 0;
    } else {
      dp[i][0] = 1;
    }
  }

  blocked = false;
  for (auto j = 0; j < n; ++j) {
    if (obstacle_grid[0][j] == 1) blocked = true;
    if (blocked) {
      dp[0][j] = 0;
    } else {
      dp[0][j] = 1;
    }
  }

  for (auto i = 1; i < m; ++i) {
    for (auto j = 1; j < n; ++j) {
      if (obstacle_grid[i][j] == 1)
        dp[i][j] = 0;
      else
        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }
  }

  return dp.back().back();
}
}  // namespace leetcode