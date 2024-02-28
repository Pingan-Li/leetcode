/**
 * @file check_permutation_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/check_permutation.h"
#include "testing/googletest/include/gtest/gtest.h"

class CheckPermutationTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(CheckPermutationTest, Case0) {
  std::string s1 = "abc";
  std::string s2 = "bca";

  ASSERT_TRUE(solution_->CheckPermutation(s1, s2));
}
TEST_F(CheckPermutationTest, Case1) {
  std::string s1 = "abc";
  std::string s2 = "bda";
  ASSERT_FALSE(solution_->CheckPermutation(s1, s2));
}
