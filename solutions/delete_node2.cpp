/**
 * @file delete_node2.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/delete_node2.h"

namespace leetcode {

ListNode *DeleteNode2(ListNode *head, int val) {
  ListNode *prev = nullptr;
  ListNode *curr = head;
  while (curr) {
    if (curr->val == val) {
      ListNode *temp = curr;
      if (prev) {
        prev->next = curr->next;
      } else {
        head = curr->next;
      }
      delete temp;  // leetcode doesn't require free or delete
      break;
    }
    prev = curr;
    curr = curr->next;
  }
  return head;
}

}  // namespace leetcode
