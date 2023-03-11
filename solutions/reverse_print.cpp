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
void recursiveGet(ListNode *head, std::vector<int> &vec) {
  if (head) {
    // call first.
    recursiveGet(head->next, vec);
    // then push.
    vec.push_back(head->val);
    return;
  } else {
    return;
  }
}
std::vector<int> reversePrint(ListNode *head) {
  std::vector<int> ret;
  recursiveGet(head, ret);
  return ret;
}

std::vector<int> reversePrint2(ListNode *head) {
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
}  // namespace leetcode
