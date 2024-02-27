/**
 * @file longest_consecutive_tests.cc
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

#include "solutions/hot100/longest_consecutive.h"
#include "testing/googletest/include/gtest/gtest.h"

class LongestConsecutiveTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  };

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(LongestConsecutiveTest, Case0) {
  std::vector<int> nums{100, 4, 200, 1, 3, 2};
  auto result = solution_->LongestConsecutive(nums);
  auto answer = 4;

  ASSERT_EQ(result, answer);
}

TEST_F(LongestConsecutiveTest, Case1) {
  std::vector<int> nums{0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  auto result = solution_->LongestConsecutive(nums);
  auto answer = 9;

  ASSERT_EQ(result, answer);
}