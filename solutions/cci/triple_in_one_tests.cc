/**
 * @file triple_in_one_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-06
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/cci/triple_in_one.h"
#include "testing/googletest/include/gtest/gtest.h"

class TripleInOneTest : public testing::Test {
 public:
  void SetUp() override {
    triple_in_one_ = std::make_unique<leetcode::TripleInOne>(stack_size_);
  }

  std::unique_ptr<leetcode::TripleInOne> triple_in_one_;
  int const stack_size_ = 5;
};

TEST_F(TripleInOneTest, Case0) {
  triple_in_one_->PrintElements();

  for (auto i = 0l; i < stack_size_ + 1; ++i) {
    for (auto j = 0; j < 3; ++j) {
      triple_in_one_->push(j, 1);
      triple_in_one_->PrintElements();
    }
  }

  for (auto i = 0l; i < stack_size_ + 1; ++i) {
    for (auto j = 0; j < 3; ++j) {
      std::cout << triple_in_one_->pop(j) << std::endl;
      triple_in_one_->PrintElements();
    }
  }

  for (auto i = 0l; i < stack_size_; ++i) {
    for (auto j = 0; j < 3; ++j) {
      triple_in_one_->push(j, i);
      ASSERT_EQ(triple_in_one_->peek(j), i);
      triple_in_one_->PrintElements();
    }
  }
}