/**
 * @file set_zeroes.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_SET_ZEROES_H_
#define SOLUTIONS_CCI_SET_ZEROES_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual void SetZeroes(std::vector<std::vector<int>>& matrix) = 0;
};

class SolutionImpl : public Solution {
 public:
  void SetZeroes(std::vector<std::vector<int>>& matrix) override;
};
}  // namespace leetcode
#endif