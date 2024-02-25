/**
 * @file climb_stairs_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/dp/climb_stairs.h"
#include "testing/googletest/include/gtest/gtest.h"

class ClimbStairsTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }
  void TearDown() override {}

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(ClimbStairsTest, Level_1) {
  int result = solution_->ClimbStairs(1);
  int answer = 1;
  ASSERT_EQ(result, answer);
}

TEST_F(ClimbStairsTest, Level_2) {
  int result = solution_->ClimbStairs(1);
  int answer = 2;
  ASSERT_EQ(result, answer);
}

TEST_F(ClimbStairsTest, Level3) {
  int result = solution_->ClimbStairs(1);
  int answer = 3;
  ASSERT_EQ(result, answer);
}