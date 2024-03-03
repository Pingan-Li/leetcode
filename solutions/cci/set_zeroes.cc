/**
 * @file set_zeroes.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/set_zeroes.h"

#include <vector>

namespace leetcode {
void SolutionImpl::SetZeroes(std::vector<std::vector<int>>& matrix) {
  std::vector<std::pair<int, int>> positions;

  auto m = matrix.size();
  auto n = matrix.front().size();

  for (auto i = 0ul; i < m; ++i) {
    for (auto j = 0ul; j < n; ++j) {
      if (matrix[i][j] == 0) {
        positions.emplace_back(i, j);
      }
    }
  }

  for (auto&& pair : positions) {
    for (auto i = 0; i < m; ++i) {
      matrix[i][pair.second] = 0;
    }

    for (auto j = 0; j < n; ++j) {
      matrix[pair.first][j] = 0;
    }
  }
}
}  // namespace leetcode