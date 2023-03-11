/**
 * @file max_area.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/max_area.h"

namespace leetcode {
int maxArea(std::vector<int> &height) {
  int maxArea{0};
  auto left = height.begin();
  auto right = height.end() - 1;
  while (left != right) {
    int curr = (right - left) * (*right > *left ? *left : *right);
    if (maxArea < curr) {
      maxArea = curr;
    }
    if (*left < *right) {
      ++left;
    } else {
      --right;
    }
  }
  return maxArea;
}
} // namespace leetcode
