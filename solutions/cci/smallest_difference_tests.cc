/**
 * @file smallest_difference_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-16
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <memory>
#include <vector>

#include "solutions/cci/smallest_difference.h"
#include "testing/googletest/include/gtest/gtest.h"

class SmallestDifferenceTests : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }
  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(SmallestDifferenceTests, Case0) {
  std::vector<int> a{1, 2, 3, 4, 5};
  std::vector<int> b{6, 7, 8, 9, 10};

  auto result = solution_->SmallestDifference(a, b);

  ASSERT_EQ(result, 1);
}