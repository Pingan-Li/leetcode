/**
 * @file swap_pairs.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "swap_pairs.h"

namespace leetcode {
ListNode *swapPairs(ListNode *head) {
  if (head && head->next) {
    ListNode *dummy = new ListNode{0, head};
    ListNode *iter = dummy;
    ListNode *temp = iter->next;
    while (temp && temp->next) {
      iter->next = temp->next;
      temp->next = iter->next->next;
      iter->next->next = temp;
      iter = temp;
      temp = iter->next;
    }
    ListNode *ret = dummy->next;
    delete dummy;
    return ret;
  } else {
    return head;
  }
}
} // namespace leetcode
