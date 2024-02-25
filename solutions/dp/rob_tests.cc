/**
 * @file rob_tests.cc
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

#include "solutions/dp/rob.h"
#include "testing/googletest/include/gtest/gtest.h"

class RobTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(RobTest, Case0) {
  std::vector<int> nums{2, 7, 9, 3, 1};
  auto result = solution_->Rob(nums);
  auto answer = 12;
  ASSERT_EQ(result, answer);
}

TEST_F(RobTest, Case1) {
  std::vector<int> nums{1, 2, 3, 1};
  auto result = solution_->Rob(nums);
  auto answer = 4;
  ASSERT_EQ(result, answer);
}
