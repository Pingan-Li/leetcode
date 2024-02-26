/**
 * @file min_path_sum.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2024-02-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef SOLUTIONS_DP_MIN_PATH_SUM_H_
#define SOLUTIONS_DP_MIN_PATH_SUM_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual int MinPathSum(std::vector<std::vector<int>>& grid) = 0;
};

class SolutionImpl : public Solution {
 public:
  int MinPathSum(std::vector<std::vector<int>>& grid) override;
};
}  // namespace leetcode
#endif