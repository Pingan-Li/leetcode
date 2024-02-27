/**
 * @file unique_paths_with_obstacles_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>
#include <vector>

#include "solutions/dp/unique_paths_with_obstacles.h"
#include "testing/googletest/include/gtest/gtest.h"

class UniquePathsWithObstaclesTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(UniquePathsWithObstaclesTest, Case0) {
  std::vector<std::vector<int>> obstacle_grid{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};

  auto result = solution_->UniquePathsWithObstacles(obstacle_grid);
  auto answer = 2;

  EXPECT_EQ(result, answer);
}

TEST_F(UniquePathsWithObstaclesTest, Case1) {
  std::vector<std::vector<int>> obstacle_grid{{0, 1}, {0, 0}};

  auto result = solution_->UniquePathsWithObstacles(obstacle_grid);
  auto answer = 1;

  EXPECT_EQ(result, answer);
}