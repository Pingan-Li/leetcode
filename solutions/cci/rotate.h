/**
 * @file rotate.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_ROTATE_H_
#define SOLUTIONS_CCI_ROTATE_H_

#include <vector>
namespace leetcode {
class Solution {
 public:
  virtual void Rotate(std::vector<std::vector<int>>& matrix) = 0;
};

class SolutionImpl : public Solution {
 public:
  void Rotate(std::vector<std::vector<int>>& matrix) override;
};
}  // namespace leetcode
#endif