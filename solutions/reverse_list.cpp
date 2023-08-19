/**
 * @file reverse_list.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/reverse_list.h"
#include "solutions/list_node.h"

namespace leetcode {
//
//  prev -> curr -> next
//
//  prev <- curr <- next
//
ListNode *ReverseList(ListNode *head) {
  ListNode *prev = nullptr;
  ListNode *curr = head;
  ListNode *next = nullptr;
  while (curr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  // prev-> curr(nullptr)
  return prev;

  // if (head && head->next) {
  //   ListNode *prev = nullptr;
  //   ListNode *curr = head;
  //   ListNode *next;
  //   while (curr) {
  //     next = curr->next;
  //     curr->next = prev;
  //     prev = curr;
  //     curr = next;
  //   }
  //   return prev;
  // } else {
  //   return head;
  // }
}

} // namespace leetcode
