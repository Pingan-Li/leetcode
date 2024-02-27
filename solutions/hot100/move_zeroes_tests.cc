/**
 * @file move_zeroes_tests.cc
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

#include "solutions/hot100/move_zeroes.h"
#include "testing/googletest/include/gtest/gtest.h"

class MoveZeroesTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(MoveZeroesTest, Case0) {
  std::vector<int> nums{0, 0, 1};
  solution_->MoveZeroes(nums);
  auto answer = std::vector<int>{1, 0, 0};
  ASSERT_EQ(nums, answer);
}