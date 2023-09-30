/**
 * @file multi_thread_1114_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-08-27
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/multi_thread_1114.h"

#include "testing/googletest/include/gtest/gtest.h"
#include <functional>
#include <thread>
#include <type_traits>

namespace leetcode {
TEST(multi_thread_1114, case0) {
  Foo foo;
  std::function<void()> printf_first(
      []() -> void { std::cout << "Print First" << std::endl; });

  std::function<void()> print_second(
      []() -> void { std::cout << "Print Second" << std::endl; });

  std::function<void()> print_third(
      []() -> void { std::cout << "Print Third" << std::endl; });
}
} // namespace leetcode