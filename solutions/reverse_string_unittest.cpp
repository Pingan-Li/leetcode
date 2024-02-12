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

#include <iostream>
#include <vector>

#include "base/auxiliary.h"
#include "solutions/reverse_string.h"
#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(ReverseString, Case0) {
  std::vector<char> s{'a', 'b', 'c'};
  ReverseString(s);
  base::Print(s.begin(), s.end());
}

TEST(Revers)
} // namespace leetcode
