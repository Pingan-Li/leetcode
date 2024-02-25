/**
 * @file climb_stairs.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/climb_stairs.h"

namespace leetcode {
int ClimbStairts(int n) {
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
