/**
 * @file compress_string_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/compress_string.h"
#include "testing/googletest/include/gtest/gtest.h"

class CompressStringTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(CompressStringTest, Case0) {
  std::string string = "aaabbbccc";

  auto result = solution_->CompressString(string);
  auto answer = "a3b3c3";
  ASSERT_EQ(result, answer);
}

TEST_F(CompressStringTest, Case1) {
  std::string string = "abc";

  auto result = solution_->CompressString(string);
  auto answer = "abc";
  ASSERT_EQ(result, answer);
}