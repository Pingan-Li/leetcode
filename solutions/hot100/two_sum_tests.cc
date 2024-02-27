/**
 * @file two_sum_tests.cc
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

#include "solutions/hot100/two_sum.h"
#include "testing/googletest/include/gtest/gtest.h"

class TwoSumTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(TwoSumTest, Case0) {
  std::vector<int> nums{3, 3};
  auto result = solution_->TwoSum(nums, 6);
  std::vector<int> answer{0, 1};

  ASSERT_EQ(result, answer);
}

TEST_F(TwoSumTest, Case1) {
  std::vector<int> nums{2, 7, 11, 15};
  auto result = solution_->TwoSum(nums, 9);
  std::vector<int> answer{0, 1};

  ASSERT_EQ(result, answer);
}
