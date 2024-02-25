/**
 * @file fib.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/fib.h"

namespace leetcode {
int TrivialSolution::Fib(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return Fib(n - 1) + Fib(n - 2);
}

int OptimalSolution::Fib(int n) {
  if (n < 2) {
    return 1;
  }

  int a = 1;
  int b = 1;
  int c = a + b;
  for (int i = 2; i < n; ++i) {
    a = b;
    b = c;
    c = a + b;
  }
  return c;
}
}  // namespace leetcode