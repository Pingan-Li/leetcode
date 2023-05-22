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
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <vector>

#include "base/probe.h"
#include "base/stack.h"

namespace base {
TEST(Stack, case_1) {
  // google::InitGoogleLogging("stack_tests");
  // std::cout << FLAGS_log_dir << std::endl;
  // Stack<Probe> stack{8};
  std::vector<Probe> vec{94124};
  //   Probe probe{};
  //   stack.Push(probe);
  //   ASSERT_EQ(1, stack.Size());
}
}  // namespace base