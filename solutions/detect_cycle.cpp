/**
 * @file detect_cycle.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/detect_cycle.h"

#include <set>

namespace leetcode {
ListNode *DetectCycle(ListNode *head) {
  if (head) {
    std::set<ListNode *> set;
    while (head) {
      if (set.find(head) != set.end()) {
        return head;
      } else {
        set.insert(head);
      }
      head = head->next;
    }
    return nullptr;
  } else {
    return nullptr;
  }
}
}  // namespace leetcode
