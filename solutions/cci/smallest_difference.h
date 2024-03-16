/**
 * @file smallest_difference.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-16
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_SMALLEST_DIFFERENCE_H_
#define SOLUTIONS_CCI_SMALLEST_DIFFERENCE_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual int SmallestDifference(std::vector<int>& a, std::vector<int>& b) = 0;
};

class SolutionImpl : public Solution {
  int SmallestDifference(std::vector<int>& a, std::vector<int>& b) override;
};
}  // namespace leetcode
#endif