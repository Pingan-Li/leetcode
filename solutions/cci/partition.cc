/**
 * @file partition.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/partition.h"

#include "solutions/list_node.h"

namespace leetcode {
ListNode* SolutionImpl::Partition(ListNode* head, int x) {
  ListNode* small = new ListNode(0);
  ListNode* small_head = small;
  ListNode* large = new ListNode(0);
  ListNode* large_head = large;
  while (head) {
    if (head->val < x) {
      small->next = head;
      small = small->next;
    } else {
      large->next = head;
      large = large->next;
    }
    head = head->next;
  }
  large->next = nullptr;
  // leetcode::PrintList(small_head->next);
  // leetcode::PrintList(large_head->next);
  small->next = large_head->next;
  leetcode::PrintList(small_head->next);
  return small_head->next;
}
}  // namespace leetcode