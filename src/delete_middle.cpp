/**
 * @file delete_middle.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "delete_middle.h"

namespace leetcode {
ListNode *deleteMiddle(ListNode *head) {
  if (head && head->next) {
    ListNode *fast = head;
    ListNode *slow = head;
    ListNode *prev = nullptr;
    while (fast && fast->next) {
      fast = fast->next;
      fast = fast->next;
      prev = slow;
      slow = slow->next;
    }
    prev->next = slow->next;
    delete slow;
    return head;
  } else {
    delete head;
    return nullptr;
  }
}
} // namespace leetcode
