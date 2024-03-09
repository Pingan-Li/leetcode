/**
 * @file set_of_stacks_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/set_of_stacks.h"
#include "testing/googletest/include/gtest/gtest.h"

class SetOfStacksTest : public testing::Test {
 public:
  void SetUp() override {}
};

TEST_F(SetOfStacksTest, Case0) {
  leetcode::StackOfPlates set_of_stacks(5);
  for (auto i = 0; i < 25; ++i) {
    set_of_stacks.push(i);
  }

  while (true) {
    auto result = set_of_stacks.pop();
    if (result == -1) break;
    std::cout << result << " " << std::endl;
  }
}