/**
 * @file one_edit_away_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/one_edit_away.h"
#include "testing/googletest/include/gtest/gtest.h"

class CanEditAwayTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(CanEditAwayTest, Case0) {
  std::string first = "bleacher";
  std::string second = "teacher";

  ASSERT_FALSE(solution_->OneEditAway(first, second));
}

TEST_F(CanEditAwayTest, Case1) {
  std::string first = "teacher";
  std::string second = "bleacher";

  ASSERT_FALSE(solution_->OneEditAway(first, second));
}