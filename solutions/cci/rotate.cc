/**
 * @file rotate.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/rotate.h"

namespace leetcode {
void SolutionImpl::Rotate(std::vector<std::vector<int>>& matrix) {
  int n = matrix.size();
  for (int i = 0; i < n / 2; ++i) {
    for (int j = 0; j < (n + 1) / 2; ++j) {
      int temp = matrix[i][j];
      matrix[i][j] = matrix[n - j - 1][i];
      matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
      matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
      matrix[j][n - i - 1] = temp;
    }
  }

  // if (matrix.empty()) return;

  // auto size = matrix.size();
  // if (size == 1) return;

  // auto layers = size / 2;

  // for (auto l = 0ul; l < layers; ++l) {
  //   for (auto i = l; i < size - 1 - l; ++i) {
  //     auto start_r = l + i;
  //     auto start_c = l;
  //     auto r = start_r;
  //     auto c = start_c;
  //     int old_value = matrix[r][c];
  //     int old_r = r;

  //     while (true) {
  //       std::swap(old_value, matrix[c][size - r - 1]);
  //       old_r = r;
  //       r = c;
  //       c = size - old_r - 1;
  //       if (r == start_r && c == start_c) break;
  //     }
  //   }
  // }
}
}  // namespace leetcode