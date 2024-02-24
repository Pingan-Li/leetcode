/**
 * @file swap_pairs.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/swap_pairs.h"

namespace leetcode {

// m -> 0 -> 1 -> 2
//
// m -> 1 -> 2
// 0 -> 1
//
// m -> 1 -> 2
//      0 ->
// m -> 1 -> 0 -> 2
//
// m -> 1 -> 0 -> 2
ListNode *SwapPairs(ListNode *head) {
  if (!head) return nullptr;

  ListNode mock(0, head);
  ListNode *curr = &mock;
  ListNode *temp = nullptr;
  while (curr->next && curr->next->next) {
    temp = curr->next;
    curr->next = curr->next->next;
    temp->next = curr->next->next;
    curr->next->next = temp;
    curr = curr->next->next;
  }
  return mock.next;

  // if (head && head->next) {
  //   ListNode *dummy = new ListNode{0, head};
  //   ListNode *iter = dummy;
  //   ListNode *temp = iter->next;
  //   while (temp && temp->next) {
  //     iter->next = temp->next;
  //     temp->next = iter->next->next;
  //     iter->next->next = temp;
  //     iter = temp;
  //     temp = iter->next;
  //   }
  //   ListNode *ret = dummy->next;
  //   delete dummy;
  //   return ret;
  // } else {
  //   return head;
  // }
}

}  // namespace leetcode
