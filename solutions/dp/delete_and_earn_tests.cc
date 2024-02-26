/**
 * @file delete_and_earn_tests.cc
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

#include "solutions/dp/delete_and_earn.h"
#include "testing/googletest/include/gtest/gtest.h"

class DeleteAndEarnTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(DeleteAndEarnTest, Case0) {
  std::vector<int> nums{3, 4, 2};

  auto result = solution_->DeleteAndEarn(nums);
  auto answer = 6;

  ASSERT_EQ(result, answer);
}

TEST_F(DeleteAndEarnTest, Case1) {
  std::vector<int> nums{2, 2, 3, 3, 3, 4};

  auto result = solution_->DeleteAndEarn(nums);
  auto answer = 9;

  ASSERT_EQ(result, answer);
}

TEST_F(DeleteAndEarnTest, Case2) {
  std::vector<int> nums{3, 1};

  auto result = solution_->DeleteAndEarn(nums);
  auto answer = 4;

  ASSERT_EQ(result, answer);
}

TEST_F(DeleteAndEarnTest, Case3) {
  std::vector<int> nums{1};

  auto result = solution_->DeleteAndEarn(nums);
  auto answer = 1;

  ASSERT_EQ(result, answer);
}
