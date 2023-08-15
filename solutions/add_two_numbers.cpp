/**
 * @file add_two_numbers.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "solutions/add_two_numbers.h"

namespace leetcode {

ListNode *AddTwoNumbers(ListNode *l1, ListNode *l2) {
  if (!l1) {
    return l2;
  }
  if (!l2) {
    return l1;
  }

  auto node1 = l1;
  auto node2 = l2;
  auto result = new ListNode(0, nullptr);
  auto current = result;
  int sum = 0;
  bool overflow = false;

  while (node1 && node2) {
    if (overflow) {
      sum = node1->val + node2->val + 1;
      overflow = false;
    } else {
      sum = node1->val + node2->val;
    }

    if (sum > 9) {
      current->val = sum - 10;
      overflow = true;
    } else {
      current->val = sum;
      overflow = false;
    }

    node1 = node1->next;
    node2 = node2->next;
    current->next = new ListNode(0, nullptr);
    current = current->next;
  }

  // make l1 always be the longer list.
  if (!node1) {
    node1 = node2;
  }

  while (node1) {
    if (overflow) {
      sum = node1->val + 1;
    } else {
      sum = node1->val;
    }

    if (sum > 9) {
      current->val = sum - 10;
      overflow = true;
    } else {
      current->val = sum;
      overflow = false;
    }
    current->next = new ListNode(0, nullptr);
    current = current->next;
  }
  return result;
}
} // namespace leetcode
