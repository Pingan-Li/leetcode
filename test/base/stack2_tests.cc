/**
 * @file stack2_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-05-26
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <glog/logging.h>
#include <gtest/gtest.h>

#include <chrono>
#include <cstddef>

#include "base/probe.h"
#include "base/stack2.h"

namespace base {

TEST(Stack2, case_0) {
  auto tick = std::chrono::system_clock::now();
  std::size_t size{10000000};
  Stack2<size_t> stack{size};
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

TEST(Stack2, case_1) {
  auto tick = std::chrono::system_clock::now();
  std::size_t size{10000000};
  std::vector<int> vector;
  vector.reserve(size);
  for (std::size_t i = 0; i < size; ++i) {
    vector.push_back(i);
  };

  for (std::size_t i = 0; i < size; ++i) {
    vector.pop_back();
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