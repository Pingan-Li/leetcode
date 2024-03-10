/**
 * @file path_with_obstacles.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_PATH_WITH_OBSTACLES_H_
#define SOLUTIONS_CCI_PATH_WITH_OBSTACLES_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual std::vector<std::vector<int>> PathWithObstacles(
      std::vector<std::vector<int>>& obstacle_grid) = 0;
};
class SolutionImpl : public Solution {
 public:
  std::vector<std::vector<int>> PathWithObstacles(
      std::vector<std::vector<int>>& obstacle_grid) override;
};
}  // namespace leetcode
#endif