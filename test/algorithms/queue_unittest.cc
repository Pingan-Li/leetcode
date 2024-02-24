/**
 * @file queue_unittest.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "algorithms/queue.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace algorithms {
TEST(Queue, case0) {
  Queue<int> queue;
  for (int i = 0; i < 10; ++i) {
    queue.Enqueue(i);
    std::cout << i << ", ";
  }
  for (int i = 0; i < 10; ++i) {
    std::cout << queue.Dequeue() << ", ";
  }
}
}  // namespace algorithms
