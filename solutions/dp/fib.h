/**
 * @file fib.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_DP_CLIMB_STAIRS_H_
#define SOLUTIONS_DP_CLIMB_STAIRS_H_
namespace leetcode {
class Solution {
 public:
  virtual int Fib(int n) = 0;
};

class TrivialSolution : public Solution {
 public:
  int Fib(int n) override;
};

class OptimalSolution : public Solution {
 public:
  int Fib(int n) override;
};

}  // namespace leetcode
#endif