/**
 * @file max_area_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>
#include <vector>

#include "solutions/hot100/max_area.h"
#include "testing/googletest/include/gtest/gtest.h"

class MaxAreaTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(MaxAreaTest, Case0) {
  std::vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
  auto result = solution_->MaxArea(height);
  auto answer = 49;

  ASSERT_EQ(result, answer);
}

TEST_F(MaxAreaTest, Case1) {
  std::vector<int> height{1, 1};
  auto result = solution_->MaxArea(height);
  auto answer = 1;

  ASSERT_EQ(result, answer);
}

TEST_F(MaxAreaTest, Case2) {
  std::vector<int> height{1, 1, 0};
  auto result = solution_->MaxArea(height);
  auto answer = 1;

  ASSERT_EQ(result, answer);
}