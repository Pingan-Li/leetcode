/**
 * @file reverse_k_group.cc
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-08-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/reverse_k_group.h"
#include "solutions/list_node.h"

namespace leetcode {

ListNode *ReverseKGroupSolutionImplA::Reverse(ListNode *head) {
  if (!head) {
    return nullptr;
  }
  ListNode *prev = nullptr;
  ListNode *curr = head;
  ListNode *next = nullptr;
  while (curr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

ListNode *ReverseKGroupSolutionImplA::ReverseKGroup(ListNode *head, int k) {
  if (!head) {
    return nullptr;
  }
}
} // namespace leetcode