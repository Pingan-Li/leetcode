/**
 * @file sorted_stack_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/sorted_stack.h"
#include "testing/googletest/include/gtest/gtest.h"

class SortedStackTest : public testing::Test {};

TEST_F(SortedStackTest, Case0) {
  leetcode::SortedStack sorted_stack;
  sorted_stack.push(1);
  sorted_stack.push(2);
  sorted_stack.push(3);
  sorted_stack.push(4);
  sorted_stack.push(5);
  while (!sorted_stack.isEmpty()) {
    std::cout << sorted_stack.peek();
    sorted_stack.pop();
  }
}