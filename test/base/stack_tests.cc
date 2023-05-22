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
#include <gtest/gtest.h>

#include <new>
#include <vector>

#include "base/probe.h"
#include "base/stack.h"

namespace base {
TEST(Stack, case_0) {
  Stack<int> stack{10};
  for (int i = 0; i < 10; ++i) {
    LOG(INFO) << "Push = " << i;
    bool result = stack.Push(i);
    ASSERT_TRUE(result);
    ASSERT_EQ(i + 1, stack.Size());
  }
  int value{-1};
  for (int i = 0; i < 10; ++i) {
    bool result = stack.Pop(value);
    LOG(INFO) << "Pop = " << value;
    ASSERT_TRUE(result);
    ASSERT_EQ(9 - i, stack.Size());
  }
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