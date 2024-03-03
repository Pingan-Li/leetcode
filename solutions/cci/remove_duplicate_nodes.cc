/**
 * @file remove_duplicate_nodes.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/remove_duplicate_nodes.h"

#include <set>

namespace leetcode {
ListNode* SolutionImpl::RemoveDuplicateNodes(ListNode* head) {
  if (!head) return nullptr;

  std::set<int> set;
  ListNode dummy;
  dummy.next = head;
  auto iter = &dummy;
  while (iter->next) {
    if (set.contains(iter->next->val)) {
      auto temp = iter->next;
      iter->next = iter->next->next;
      delete temp;
    } else {
      set.insert(iter->next->val);
      iter = iter->next;
    }
  }
  return head;
}
}  // namespace leetcode