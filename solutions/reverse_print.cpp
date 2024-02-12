/**
 * @file reverse_print.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/reverse_print.h"

namespace leetcode {
void RecursiveGet(ListNode *head, std::vector<int> &vec) {
  if (head) {
    // call first.
    RecursiveGet(head->next, vec);
    // then push.
    vec.push_back(head->val);
    return;
  }
  return;
}
std::vector<int> ReversePrint(ListNode *head) {
  std::vector<int> ret;
  RecursiveGet(head, ret);
  return ret;
}

std::vector<int> ReversePrint2(ListNode *head) {
  if (head) {
    std::vector<int> ret;
    while (head) {
      ret.push_back(head->val);
      head = head->next;
    }
    return {ret.crbegin(), ret.crend()};
  } else {
    return {};
  }
}
} // namespace leetcode
