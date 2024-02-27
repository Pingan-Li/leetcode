/**
 * @file longest_consecutive.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_HOT100_LONGEST_CONSECUTIVE_H_
#define SOLUTIONS_HOT100_LONGEST_CONSECUTIVE_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual int LongestConsecutive(std::vector<int>& nums) = 0;
};

class SolutionImpl : public Solution {
 public:
  int LongestConsecutive(std::vector<int>& nums) override;
};
}  // namespace leetcode
#endif