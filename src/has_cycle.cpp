/**
 * @file has_cycle.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "has_cycle.h"

namespace leetcode {
bool hasCycle(ListNode *head) {
  ListNode *fast = head;
  ListNode *slow = head;
  while (fast && fast->next) {
    fast = fast->next;
    fast = fast->next;
    slow = slow->next;
    if (fast == slow) {
      return true;
    }
  }
  return false;
}
} // namespace leetcode
