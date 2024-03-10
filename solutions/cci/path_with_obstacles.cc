/**
 * @file path_with_obstacles.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/path_with_obstacles.h"

#include <functional>
#include <vector>

namespace leetcode {
std::vector<std::vector<int>> SolutionImpl::PathWithObstacles(
    std::vector<std::vector<int>>& obstacle_grid) {
  if (obstacle_grid.size() == 0 || obstacle_grid.front().size() == 0 ||
      obstacle_grid.front().front() == 1 || obstacle_grid.back().back() == 1)
    return {};

  auto m = obstacle_grid.size();
  auto n = obstacle_grid.front().size();

  std::vector<std::vector<int>> path;
  std::vector<std::vector<bool>> visited(m, std::vector<bool>(n, false));
  std::function<bool(int, int)> dfs = [&](int x, int y) -> bool {
    if (x >= m || y >= n || obstacle_grid[x][y] == 1 || visited[x][y])
      return false;
    // 递归边界
    if (x == m - 1 && y == n - 1) {
      path.push_back({x, y});
      return true;
    }
    visited[x][y] = true;
    path.push_back({x, y});
    if (dfs(x + 1, y) || dfs(x, y + 1)) {
      return true;
    }
    path.pop_back();
    // vis[x][y] = false; 核心是不要写这行
    return false;
  };
  dfs(0, 0);
  return path;
}
};  // namespace leetcode