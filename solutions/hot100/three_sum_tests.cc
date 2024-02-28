/**
 * @file three_sum_tests.cc
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

#include "solutions/hot100/three_sum.h"
#include "testing/googletest/include/gtest/gtest.h"

class ThreeSumTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(ThreeSumTest, Case0) {
  std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
  std::vector<std::vector<int>> answer = {{-1, -1, 2}, {-1, 0, 1}};
  auto result = solution_->ThreeSum(nums);

  ASSERT_EQ(result, answer);
}
