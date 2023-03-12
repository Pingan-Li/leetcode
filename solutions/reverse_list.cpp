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

namespace leetcode {
//
//  prev -> curr -> next
//
ListNode *ReverseList(ListNode *head) {
  if (head && head->next) {
    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *next;
    while (curr) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;
  } else {
    return head;
  }
}

}  // namespace leetcode
