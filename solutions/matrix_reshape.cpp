/**
 * @file matrix_reshape.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/matrix_reshape.h"

namespace leetcode {

std::vector<std::vector<int>> MatrixReshape(std::vector<std::vector<int>> &mat,
                                            int r, int c) {
  std::size_t m = mat.size();
  std::size_t n = mat.front().size();
  if (m * n != r * c) {
    return mat;
  }

  std::vector<std::vector<int>> ans(r, std::vector<int>(c));
  for (int x = 0; x < m * n; ++x) {
    ans[x / c][x % c] = mat[x / n][x % n];
  }
  return ans;
}

}  // namespace leetcode
