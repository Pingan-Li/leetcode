/**
 * @file ways_to_step.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_WAYS_TO_STEP_H_
#define SOLUTIONS_CCI_WAYS_TO_STEP_H_
namespace leetcode {
class Solution {
 public:
  virtual int WaysToStep(int n) = 0;
};
class SolutionImpl : public Solution {
 public:
  int WaysToStep(int n) override;
};
}  // namespace leetcode
#endif  // SOLUTIONS_CCI_WAY_TO_STEP_H_