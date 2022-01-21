/**
 * @file remove_duplicate_nodes.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "remove_duplicate_nodes.h"
namespace leetcode {
ListNode *removeDuplicateNodes(ListNode *head) {
  ListNode *iter = head;
  while (iter) {
    ListNode *temp = iter;
    while (temp && temp->next) {
      if (temp->next->val == iter->val) {
        temp->next = temp->next->next;
      } else {
        temp = temp->next;
      }
    }
    iter = iter->next;
  }
  return head;
}
} // namespace leetcode
