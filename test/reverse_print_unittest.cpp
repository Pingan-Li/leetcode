/**
 * @file reverse_print_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "solutions/reverse_print.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(reverse_print, case_0) {
  std::vector<int> input{1, 2, 3, 4, 5};
  ListNode *head = spawnList(input);
  std::vector<int> ret = reversePrint(head);
  for (auto iter = ret.begin(); iter != ret.end(); ++iter) {
    std::cout << *iter << ", ";
  }
}

TEST(reverse_print, case_1) {
  std::vector<int> input{1, 2, 3, 4, 5};
  ListNode *head = spawnList(input);
  std::vector<int> ret = reversePrint2(head);
  for (auto iter = ret.begin(); iter != ret.end(); ++iter) {
    std::cout << *(iter) << ", ";
  }
}

}  // namespace leetcode