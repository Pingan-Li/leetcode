/**
 * @file split_list_to_parts.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/split_list_to_parts.h"

namespace leetcode {
std::vector<ListNode *> splitListToParts(ListNode *head, int k) {
  std::size_t length{0};
  ListNode *iter = head;
  while (iter) {
    ++length;
    iter = iter->next;
  }
  int round = length / k;
  int rest = length % k;
  std::vector<ListNode *> ret(k, nullptr);
  iter = head;
  for (std::size_t i = 0; i < k && iter != nullptr; ++i) {
    ret[i] = iter;
    int subListSize = round + (i < rest ? 1 : 0);
    for (std::size_t j = 0; j < subListSize - 1; ++j) {
      iter = iter->next;
    }
    ListNode *temp = iter->next;
    iter->next = nullptr;
    iter = temp;
  }
  return ret;
}
}  // namespace leetcode
