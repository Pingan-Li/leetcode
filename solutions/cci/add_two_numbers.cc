/**
 * @file add_two_numbers.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/add_two_numbers.h"

#include "solutions/list_node.h"

namespace leetcode {
ListNode* SolutionImpl::AddTwoNumbers(ListNode* l1, ListNode* l2) {
  auto n1 = 0;
  auto n2 = 0;
  auto sum = 0;
  auto carry = 0;
  ListNode handle;
  auto* iter = &handle;

  while (l1 || l2 || carry) {
    n1 = l1 ? l1->val : 0;
    n2 = l2 ? l2->val : 0;
    l1 = l1 ? l1->next : nullptr;
    l2 = l2 ? l2->next : nullptr;
    iter->next = new ListNode;
    sum = n1 + n2 + carry;
    iter->next->val = sum % 10;
    carry = sum / 10;
    iter = iter->next;
  }

  return handle.next;
}
}  // namespace leetcode