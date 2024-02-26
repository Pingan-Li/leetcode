/**
 * @file min_path_sum_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-26
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>
#include <vector>

#include "solutions/dp/min_path_sum.h"
#include "testing/googletest/include/gtest/gtest.h"

class MinPathSumTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(MinPathSumTest, Case0) {
  std::vector<std::vector<int>> nums{{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
  auto result = solution_->MinPathSum(nums);
  auto answer = 7;
  ASSERT_EQ(result, answer);
}

TEST_F(MinPathSumTest, Case1) {
  std::vector<std::vector<int>> nums{{1, 2, 3}, {4, 5, 6}};
  auto result = solution_->MinPathSum(nums);
  auto answer = 12;
  ASSERT_EQ(result, answer);
}