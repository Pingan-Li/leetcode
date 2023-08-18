/**
 * @file swap_paris_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/swap_pairs.h"

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
TEST(swap_paris, case_0) {
  std::vector<int> vector{1, 2, 3, 4, 5};
  ListNode *list = SpawnList(vector);
  PrintList(list);
  ListNode *ret = SwapPairs(list);
  PrintList(ret);
}

TEST(swap_paris, case_1) {
  std::vector<int> vector{1};
  ListNode *list = SpawnList(vector);
  PrintList(list);
  ListNode *ret = SwapPairs(list);
  PrintList(ret);
}

TEST(swap_paris, case_2) {
  std::vector<int> vector{1, 2};
  ListNode *list = SpawnList(vector);
  PrintList(list);
  ListNode *ret = SwapPairs(list);
  PrintList(ret);
}

} // namespace leetcode
