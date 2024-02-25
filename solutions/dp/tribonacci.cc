/**
 * @file tribonacci.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/tribonacci.h"

namespace leetcode {
int TrivialSolution::Tribonacci(int n) {
  if (n == 0) return 0;
  if (n <= 2) return 1;
  return Tribonacci(n - 1) + Tribonacci(n - 2) + Tribonacci(n - 3);
}

int OptimalSolution::Tribonacci(int n) {
  if (n == 0) return 0;
  if (n <= 2) return 1;

  int a = 0;
  int b = 1;
  int c = 1;
  int d = a + b + c;
  for (int i = 3; i < n; ++i) {
    a = b;
    b = c;
    c = d;
    d = a + b + c;
  }
  return d;
}
}  // namespace leetcode