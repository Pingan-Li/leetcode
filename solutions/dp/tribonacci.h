/**
 * @file tribonacci.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_DP_TRIBONACCI_H_
#define SOLUTIONS_DP_TRIBONACCI_H_
namespace leetcode {
class Solution {
 public:
  virtual int Tribonacci(int n) = 0;
};

class TrivialSolution : public Solution {
 public:
  int Tribonacci(int n) override;
};
class OptimalSolution : public Solution {
 public:
  int Tribonacci(int n) override;
};
}  // namespace leetcode
#endif