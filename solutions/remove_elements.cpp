/**
 * @file remove_elements.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/remove_elements.h"

namespace leetcode {
ListNode *removeElements(ListNode *head, int val) {
  struct ListNode *dummy = new ListNode(0, head);
  struct ListNode *iter = dummy;
  while (iter->next) {
    if (iter->next->val == val) {
      iter->next = iter->next->next;
    } else {
      iter = iter->next;
    }
  }
  return dummy->next;
}

ListNode *removeElements2(ListNode *head, int val) {
  if (head) {
    head->next = removeElements2(head->next, val);
    return head->val == val ? head->next : head;
  } else {
    return nullptr;
  }
}
} // namespace leetcode
