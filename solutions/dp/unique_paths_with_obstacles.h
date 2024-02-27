/**
 * @file unique_paths_with_obstacles.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_DP_UNIQUE_PATHS_WITH_OBSTACLES_H_
#define SOLUTIONS_DP_UNIQUE_PATHS_WITH_OBSTACLES_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual int UniquePathsWithObstacles(
      std::vector<std::vector<int>>& obstacle_grid) = 0;
};

class SolutionImpl : public Solution {
 public:
  int UniquePathsWithObstacles(
      std::vector<std::vector<int>>& obstacle_grid) override;
};
}  // namespace leetcode
#endif