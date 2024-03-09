/**
 * @file ways_to_step_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <memory>

#include "solutions/cci/ways_to_step.h"
#include "testing/googletest/include/gtest/gtest.h"

class WaysToStepTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }
  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(WaysToStepTest, Case0) { ASSERT_EQ(solution_->WaysToStep(0), 0); }

TEST_F(WaysToStepTest, Case1) { ASSERT_EQ(solution_->WaysToStep(1), 1); }

TEST_F(WaysToStepTest, Case2) { ASSERT_EQ(solution_->WaysToStep(2), 2); }

TEST_F(WaysToStepTest, Case3) { ASSERT_EQ(solution_->WaysToStep(3), 4); }

TEST_F(WaysToStepTest, Case4) { ASSERT_EQ(solution_->WaysToStep(4), 7); }