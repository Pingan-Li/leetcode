/**
 * @file add_two_numbers.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "solutions/add_two_numbers.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(add_two_numers, case_0) {
  std::vector vec1{1, 2, 3, 4, 5};
  std::vector vec2{6, 7, 8, 9, 0};
  auto list1 = SpawnList(vec1);
  auto list2 = SpawnList(vec2);
  PrintList(list1);
  PrintList(list2);
  auto ret = AddTwoNumbers(list1, list2);
  PrintList(ret);
}

TEST(add_two_numers, case_1) {
  std::vector vec2{9};
  auto list2 = SpawnList(vec2);
  PrintList(list2);
  auto ret = AddTwoNumbers(nullptr, list2);
  PrintList(ret);
}

TEST(add_two_numers, case_3) {
  std::vector vec2{9};
  auto list2 = SpawnList(vec2);
  PrintList(list2);
  auto ret = AddTwoNumbers(nullptr, nullptr);
  PrintList(ret);
}

} // namespace leetcode
