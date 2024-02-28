/**
 * @file is_unique_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/is_unique.h"
#include "testing/googletest/include/gtest/gtest.h"

class IsUniuqeTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(IsUniuqeTest, Case0) {
  std::string str = "leetcode";
  auto result = solution_->IsUniuqe(str);

  ASSERT_FALSE(result);
}