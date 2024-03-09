/**
 * @file my_queue_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/my_queue.h"
#include "testing/googletest/include/gtest/gtest.h"

class MyQueueTest : public testing::Test {};

TEST_F(MyQueueTest, Case0) {
  leetcode::MyQueue my_queue;
  for (auto i = 0; i < 10; ++i) {
    my_queue.push(i);
  }
  while (!my_queue.empty()) {
    std::cout << my_queue.pop() << std::endl;
  }
}
