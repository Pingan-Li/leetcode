/**
 * @file matrix_reshape_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "matrix_reshape.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
namespace leetcode {
TEST(matrix_reshape, heck) {
  std::vector<std::vector<int>> fuck(3, std::vector<int>{1, 2, 3, 4});
  auto result = matrixReshape(fuck, 2, 6);

  for (auto &vec : fuck) {
    for (auto &val : vec) {
      std::cout << val << " ";
    }
    std::cout << '\n';
  }

  for (auto &vec : result) {
    for (auto &val : vec) {
      std::cout << val << " ";
    }
    std::cout << '\n';
  }
}
} // namespace leetcode
