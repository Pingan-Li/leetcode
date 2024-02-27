/**
 * @file max_area.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_HOT100_MAX_AREA_H_
#define SOLUTIONS_HOT100_MAX_AREA_H_

#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual int MaxArea(std::vector<int>& height) = 0;
};

class SolutionImpl : public Solution {
 public:
  int MaxArea(std::vector<int>& height) override;
};
}  // namespace leetcode
#endif