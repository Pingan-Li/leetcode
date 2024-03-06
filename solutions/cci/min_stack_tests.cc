/**
 * @file min_stack_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-06
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/min_stack.h"
#include "testing/googletest/include/gtest/gtest.h"

class MinStackTest : public testing::Test {
 public:
  void SetUp() override { min_stack_ = std::make_unique<leetcode::MinStack>(); }

  std::unique_ptr<leetcode::MinStack> min_stack_;
};

TEST_F(MinStackTest, Case0) {
  min_stack_->push(4);
  min_stack_->push(3);
  min_stack_->push(2);
  min_stack_->push(1);
  min_stack_->push(0);

  ASSERT_EQ(min_stack_->getMin(), 0);
  ASSERT_EQ(min_stack_->top(), 0);
}