/**
 * @file kth_to_last.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "kth_to_last.h"

namespace leetcode {
int kthToLast(ListNode *head, int k) {
  ListNode *fast = head;
  ListNode *slow = head;
  while (k--) {
    fast = fast->next;
  }
  while (fast) {
    fast = fast->next;
    slow = slow->next;
  }
  return slow->val;
}
} // namespace leetcode
