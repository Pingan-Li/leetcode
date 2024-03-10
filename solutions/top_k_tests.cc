/**
 * @file top_k_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/top_k.h"
#include "testing/googletest/include/gtest/gtest.h"

class TopKTests : public testing::Test {
 public:
};

TEST_F(TopKTests, Case0) {
  leetcode::MaxHeap head;
  for (int i = 0; i < 100; ++i) {
    head.Push(i);
    ASSERT_EQ(head.Size(), i + 1);
  }

  std::cout << "[ ";
  for (int i = 0; i < 100; ++i) {
    std::cout << head.Top() << ' ';
    auto rv = head.Pop();
    ASSERT_TRUE(rv);
  }
  std::cout << "]" << std::endl;
}
