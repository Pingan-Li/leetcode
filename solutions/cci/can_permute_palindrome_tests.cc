/**
 * @file can_permute_palindrome_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-02
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/can_permute_palindrome.h"
#include "testing/googletest/include/gtest/gtest.h"

class CanPermutePalindromeTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(CanPermutePalindromeTest, case0) {
  std::string string = "asd";

  ASSERT_FALSE(solution_->CanPermutePalindrome(string));
}

TEST_F(CanPermutePalindromeTest, case1) {
  std::string string = "bba";

  ASSERT_TRUE(solution_->CanPermutePalindrome(string));
}