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

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(add_two_numers, case_0) {
  std::vector vec1{9};
  std::vector vec2{9};
  auto list1 = spawnList(vec1);
  auto list2 = spawnList(vec2);
  printList(list1);
  printList(list2);
  auto ret = addTwoNumbers(list1, list2);
  printList(ret);
}

TEST(add_two_numers, case_1) {
  std::vector vec2{9};
  auto list2 = spawnList(vec2);
  printList(list2);
  auto ret = addTwoNumbers(nullptr, list2);
  printList(ret);
}

TEST(add_two_numers, case_3) {
  std::vector vec2{9};
  auto list2 = spawnList(vec2);
  printList(list2);
  auto ret = addTwoNumbers(nullptr, nullptr);
  printList(ret);
}

}  // namespace leetcode
