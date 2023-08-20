/**
 * @file delete_duplicates.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/delete_duplicates.h"

namespace leetcode {
ListNode *DeleteDuplicates(ListNode *head) {
  if (!head) {
    return nullptr;
  }

  ListNode *iter = head;
  ListNode *temp = iter;
  while (iter && iter->next) {
    if (iter->val == iter->next->val) {
      temp = iter->next;
      iter->next = temp->next;
      delete temp;
    } else {
      iter = iter->next;
    }
  }
  return head;
}
} // namespace leetcode
