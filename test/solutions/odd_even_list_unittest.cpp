/**
 * @file odd_even_list_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/odd_even_list.h"

#include <gtest/gtest.h>

namespace leetcode {

TEST(odd_even_list, case_0) {
  ListNode *head = SpawnList(std::vector<int>{1, 2, 3, 3, 4, 2, 1, 2, 4});
  PrintList(head);
  ListNode *ret = OddEvenList2(head);
  PrintList(ret);
}

}  // namespace leetcode
