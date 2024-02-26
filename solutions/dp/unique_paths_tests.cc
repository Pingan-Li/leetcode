/**
 * @file unique_paths_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-26
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/dp/unique_paths.h"
#include "testing/googletest/include/gtest/gtest.h"

class UniquePathsTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(UniquePathsTest, Case0) {
  auto result = solution_->UniquePaths(3, 2);
  auto answer = 3;
  ASSERT_EQ(result, answer);
}

TEST_F(UniquePathsTest, Case1) {
  auto result = solution_->UniquePaths(3, 7);
  auto answer = 28;
  ASSERT_EQ(result, answer);
}