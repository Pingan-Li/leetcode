/**
 * @file reverse.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/reverse.h"

#include <climits>
#include <iostream>
#include <vector>

namespace leetcode {

int Reverse(int x) {
  int ret = 0;
  while (x != 0) {
    if (ret < INT_MIN / 10 || ret > INT_MAX / 10) {
      return 0;
    }
    int target = x % 10;
    x /= 10;
    ret = ret * 10 + target;
  }
  return ret;
}

}  // namespace leetcode
