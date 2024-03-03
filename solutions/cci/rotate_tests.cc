/**
 * @file rotate_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iomanip>
#include <ios>
#include <memory>
#include <vector>

#include "solutions/cci/rotate.h"
#include "testing/googletest/include/gtest/gtest.h"

class RotateTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(RotateTest, Case0) {
  std::vector<std::vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  solution_->Rotate(matrix);

  for (auto&& row : matrix) {
    for (auto v : row) {
      std::cout << std::setw(10) << std::left << v;
    }
    std::cout << std::endl;
  }
}

TEST_F(RotateTest, Case1) {
  std::vector<std::vector<int>> matrix{{1, 2}, {3, 4}};
  solution_->Rotate(matrix);

  for (auto&& row : matrix) {
    for (auto v : row) {
      std::cout << std::setw(10) << std::left << v;
    }
    std::cout << std::endl;
  }
}

TEST_F(RotateTest, Case2) {
  std::vector<std::vector<int>> matrix{
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  solution_->Rotate(matrix);

  for (auto&& row : matrix) {
    for (auto v : row) {
      std::cout << std::setw(10) << std::left << v;
    }
    std::cout << std::endl;
  }
}