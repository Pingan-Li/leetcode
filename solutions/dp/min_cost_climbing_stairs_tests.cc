/**
 * @file min_cost_climbing_stairs_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>
#include <vector>

#include "solutions/dp/min_cost_climbing_stairs.h"
#include "testing/googletest/include/gtest/gtest.h"

class MinCostClimbingStairsTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(MinCostClimbingStairsTest, Case0) {
  std::vector<int> cost{10, 15, 20};
  int result = solution_->MinCostClimbingStairs(cost);
  int answer = 15;
  ASSERT_EQ(result, answer);
}

TEST_F(MinCostClimbingStairsTest, Case1) {
  std::vector<int> cost{1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
  int result = solution_->MinCostClimbingStairs(cost);
  int answer = 6;
  ASSERT_EQ(result, answer);
}