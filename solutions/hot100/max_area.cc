/**
 * @file max_area.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/hot100/max_area.h"

#include <algorithm>

namespace leetcode {
int SolutionImpl::MaxArea(std::vector<int> &height) {
  auto i = 0ul;
  auto j = height.size() - 1;
  auto area = 0ul;
  while (i < j) {
    auto h = std::min(height[i], height[j]);
    area = std::max(area, h * (j - i));
    if (height[i] < height[j])
      ++i;
    else
      --j;
  }
  return area;
}
}  // namespace leetcode