/**
 * @file stack_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-05-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <glog/logging.h>

#include <chrono>
#include <new>
#include <vector>

#include "base/probe.h"
#include "base/stack.h"
#include "testing/googletest/include/gtest/gtest.h"

namespace base {

TEST(Stack, case_0) {
  Stack<int> stack{10};
  for (int i = 0; i < 10; ++i) {
    LOG(INFO) << "Push = " << i;
    bool result = stack.Push(i);
    ASSERT_TRUE(result);
    ASSERT_EQ(i + 1, stack.Size());
  }
  ASSERT_TRUE(stack.IsFull());
  int value{-1};
  for (int i = 0; i < 10; ++i) {
    bool result = stack.Pop(value);
    LOG(INFO) << "Pop = " << value;
    ASSERT_TRUE(result);
    ASSERT_EQ(9 - i, stack.Size());
  }
  ASSERT_TRUE(stack.IsEmpty());
}

TEST(Vector, case_1) {
  auto tick = std::chrono::system_clock::now();
  std::size_t size{10000000};
  Stack<size_t> stack{size};
  size_t result;
  for (std::size_t i = 0; i < size; ++i) {
    stack.Push(i);
  };

  for (std::size_t i = 0; i < size; ++i) {
    stack.Pop(result);
  }
  auto tock = std::chrono::system_clock::now();
  LOG(ERROR) << "Time "
             << (tock.time_since_epoch().count() -
                 tick.time_since_epoch().count());
}

}  // namespace base

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  google::InitGoogleLogging(argv[0]);
  FLAGS_logtostderr = 1;
  FLAGS_colorlogtostderr = 1;
  int result = RUN_ALL_TESTS();
  google::ShutdownGoogleLogging();
  return result;
}