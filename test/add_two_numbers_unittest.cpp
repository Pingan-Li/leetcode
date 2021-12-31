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
#include "add_two_numbers.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>
TEST(add_two_numers, case_0) {
  std::vector vec1{9};
  std::vector vec2{9};
  auto list1 = leetcode::spawList(vec1);
  auto list2 = leetcode::spawList(vec2);
  leetcode::printList(list1);
  leetcode::printList(list2);
  auto ret = leetcode::addTwoNumbers(list1, list2);
  leetcode::printList(ret);
}

TEST(add_two_numers, case_1) {
  std::vector vec2{9};
  auto list2 = leetcode::spawList(vec2);
  leetcode::printList(list2);
  auto ret = leetcode::addTwoNumbers(nullptr, list2);
  leetcode::printList(ret);
}

TEST(add_two_numers, case_3) {
  std::vector vec2{9};
  auto list2 = leetcode::spawList(vec2);
  leetcode::printList(list2);
  auto ret = leetcode::addTwoNumbers(nullptr, nullptr);
  leetcode::printList(ret);
}