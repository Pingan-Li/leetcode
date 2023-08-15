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
  ListNode fake;
  ListNode *currnet = &fake;
  bool overflow = false;
  while (l1 || l2) {
    int val1 = l1 ? l1->val : 0;
    int val2 = l2 ? l2->val : 0;
    int sum = val1 + val2;
    if (overflow) {
      ++sum;
    }
    if (sum > 9) {
      sum -= 10;
      overflow = true;
    } else {
      overflow = false;
    }

    currnet->next = new ListNode(sum, nullptr);
    currnet = currnet->next;
    if (l1) {
      l1 = l1->next;
    }
    if (l2) {
      l2 = l2->next;
    }
  }
  if (overflow) {
    currnet->next = new ListNode(1, nullptr);
  }
  return fake.next;
}
// ListNode *AddTwoNumbers(ListNode *l1, ListNode *l2) {
//   // case 0: l1 is nullptr.
//   if (!l1) {
//     return l2;
//   }
//   // case 1: l2 is nullptr.
//   if (!l2) {
//     return l1;
//   }

//   ListNode *head = new ListNode();
//   int sum{0};
//   bool overflow{false};
//   auto current = head;
//   auto node1 = l1;
//   auto node2 = l2;
//   while (node1 && node2) {
//     current->next = new ListNode();
//     if (overflow) {
//       sum = node1->val + node2->val + 1;
//     } else {
//       sum = node1->val + node2->val;
//     }
//     if (sum > 9) {
//       current->next->val = sum - 10;
//       overflow = true;
//     } else {
//       current->next->val = sum;
//       overflow = false;
//     }
//     current = current->next;
//     node1 = node1->next;
//     node2 = node2->next;
//   }
//   // case 2: l1 and l2 is ended and overflow is true.
//   if (!node1 && !node2) {
//     if (overflow) {
//       current->next = new ListNode{1, nullptr};
//       overflow = false;
//     }
//   } else {
//     auto node3 = (node1 == nullptr ? node2 : node1);
//     while (node3) {
//       current->next = new ListNode;
//       if (overflow) {
//         sum = node3->val + 1;
//       } else {
//         sum = node3->val;
//       }
//       if (sum > 9) {
//         overflow = true;
//         current->next->val = sum - 10;
//       } else {
//         overflow = false;
//         current->next->val = sum;
//       }
//       current = current->next;
//       node3 = node3->next;
//     }
//     if (overflow) {
//       current->next = new ListNode{1, nullptr};
//     }
//   }
//   return head->next;
// }
} // namespace leetcode
