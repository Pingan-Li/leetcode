/**
 * @file remove_elements_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/remove_elements.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(remove_elemenets, case_0) {
  ListNode *head = SpawnList(std::vector<int>{1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2,
                                              1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1});
  PrintList(head);
  ListNode *ret = RemoveElements(head, 1);
  PrintList(ret);
}

}  // namespace leetcode
