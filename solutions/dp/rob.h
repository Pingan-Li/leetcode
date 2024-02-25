/**
 * @file rob.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_DP_ROB_H_
#define SOLUTIONS_DP_ROB_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual int Rob(std::vector<int>& nums) = 0;
};

class SolutionImpl : public Solution {
 public:
  int Rob(std::vector<int>& nums) override;
};
}  // namespace leetcode
#endif