/**
 * @file set_zeroes_tests.cc
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

#include "solutions/cci/set_zeroes.h"
#include "testing/googletest/include/gtest/gtest.h"

class SetZeroesTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(SetZeroesTest, Case0) {
  std::vector<std::vector<int>> matrix{{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};

  solution_->SetZeroes(matrix);

  for (auto&& row : matrix) {
    for (auto value : row) {
      std::cout << std::setw(3) << std::left << value;
    }
    std::cout << std::endl;
  }
}

TEST_F(SetZeroesTest, Case1) {
  std::vector<std::vector<int>> matrix{
      {1, 2, 3}, {4, 0, 6}, {7, 8, 9}, {10, 11, 12}};

  solution_->SetZeroes(matrix);

  for (auto&& row : matrix) {
    for (auto value : row) {
      std::cout << std::setw(3) << std::left << value;
    }
    std::cout << std::endl;
  }
}

TEST_F(SetZeroesTest, Case2) {
  std::vector<std::vector<int>> matrix{{1, 2, 3, 0}};

  solution_->SetZeroes(matrix);

  for (auto&& row : matrix) {
    for (auto value : row) {
      std::cout << std::setw(3) << std::left << value;
    }
    std::cout << std::endl;
  }
}

TEST_F(SetZeroesTest, Case3) {
  std::vector<std::vector<int>> matrix{{1}, {2}, {3}, {0}};

  solution_->SetZeroes(matrix);

  for (auto&& row : matrix) {
    for (auto value : row) {
      std::cout << std::setw(3) << std::left << value;
    }
    std::cout << std::endl;
  }
}