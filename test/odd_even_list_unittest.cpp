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
  ListNode *head = spawnList(std::vector<int>{1, 2, 3, 3, 4, 2, 1, 2, 4});
  printList(head);
  ListNode *ret = oddEvenList2(head);
  printList(ret);
}

}  // namespace leetcode
