/**
 * @file is_fliped_string_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/is_fliped_string.h"
#include "testing/googletest/include/gtest/gtest.h"

class IsFlipedStringTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(IsFlipedStringTest, Case0) {
  std::string s1 = "water";
  std::string s2 = "terwa";
  ASSERT_TRUE(solution_->IsFlipedString(s1, s2));
}
TEST_F(IsFlipedStringTest, Case1) {
  std::string s1 = "";
  std::string s2 = "";
  ASSERT_TRUE(solution_->IsFlipedString(s1, s2));
}
TEST_F(IsFlipedStringTest, Case2) {
  std::string s1 = "waterz";
  std::string s2 = "terwa";
  ASSERT_FALSE(solution_->IsFlipedString(s1, s2));
}
