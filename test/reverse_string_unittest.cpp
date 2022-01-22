/**
 * @file reverse_string_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "reverse_string.h"
#include "vector"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "iostream"
namespace leetcode {
TEST(reverse_string, case_0) {
  std::vector<char> s{'a', 'b', 'c'};
  reverseString(s);
  for (auto ch : s) {
    std::cout << ch << ',';
  }
  std::cout << '\n';
}
} // namespace leetcode
