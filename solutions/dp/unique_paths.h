/**
 * @file unique_paths.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-26
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_DP_UNIQUE_PATHS_H_
#define SOLUTIONS_DP_UNIQUE_PATHS_H_

namespace leetcode {
class Solution {
 public:
  virtual int UniquePaths(int m, int n) = 0;
};

class SolutionImpl : public Solution {
 public:
  int UniquePaths(int m, int n) override;
};
}  // namespace leetcode
#endif