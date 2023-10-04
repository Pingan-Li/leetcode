/**
 * @file add_binary_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "solutions/add_binary.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(AddBinary, Case0) {
  std::string a = "101";
  std::string b = "1";
  std::string expect = "110";
  std::string result = AddBinary(a, b);
  ASSERT_EQ(result, expect);
}

TEST(AddBinary, Case1) {
  std::string a = "101";
  std::string b = "";
  std::string expect = "101";
  std::string result = AddBinary(a, b);
  ASSERT_EQ(result, expect);
}


TEST(AddBinary, Case2) {
  std::string a = "1111111111111";
  std::string b = "1";
  std::string expect = "10000000000000";
  std::string result = AddBinary(a, b);
  ASSERT_EQ(result, expect);
}
} // namespace leetcode