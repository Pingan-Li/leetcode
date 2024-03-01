/**
 * @file replace_spaces_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-01
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/replace_spaces.h"
#include "testing/googletest/include/gtest/gtest.h"

class ReplaceSpacesTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(ReplaceSpacesTest, Case0) {
  std::string s = "Mr John Smith    ";
  int length = 13;
  auto result = solution_->ReplaceSpaces(s, length);
  auto answer = std::string{"Mr%20John%20Smith"};
  ASSERT_EQ(result, answer);
}