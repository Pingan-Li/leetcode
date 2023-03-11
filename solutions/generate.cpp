/**
 * @file generate.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/generate.h"

#include <vector>

namespace leetcode {

std::vector<std::vector<int>> generate(int numRows) {
  std::vector<std::vector<int>> ret(numRows);
  for (std::size_t i = 0; i < numRows; ++i) {
    ret[i].resize(i + 1);
    ret[i][0] = 1;
    ret[i][i] = 1;
    for (int j = 1; j < i; ++j) {
      ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
    }
  }
  return ret;
}

}  // namespace leetcode
