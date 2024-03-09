/**
 * @file detect_cycle.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/detect_cycle.h"

namespace leetcode {
ListNode *SolutionImpl::DetectCycle(ListNode *head) {
  auto slow = head;
  auto fast = head;
  while (fast) {
    slow = slow->next;
    if (!fast->next) {
      return nullptr;
    }

    fast = fast->next->next;
    if (fast == slow) {
      auto ptr = head;
      while (ptr != slow) {
        ptr = ptr->next;
        slow = slow->next;
      }
      return ptr;
    }
  }
  return nullptr;
}
}  // namespace leetcode