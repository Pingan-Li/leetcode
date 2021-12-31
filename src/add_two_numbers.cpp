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

#include "add_two_numbers.h"
namespace leetcode {
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
  if (l1 && l2) {
    ListNode *head = new ListNode();
    int sum{0};
    bool isOverflow{false};
    auto iterRet = head;
    auto iter1 = l1;
    auto iter2 = l2;
    while (iter1 && iter2) {
      iterRet->next = new ListNode;
      if (isOverflow) {
        sum = iter1->val + iter2->val + 1;
      } else {
        sum = iter1->val + iter2->val;
      }
      if (sum > 9) {
        iterRet->next->val = sum - 10;
        isOverflow = true;
      } else {
        iterRet->next->val = sum;
        isOverflow = false;
      }
      iterRet = iterRet->next;
      iter1 = iter1->next;
      iter2 = iter2->next;
    }
    if (iter1 == nullptr && iter2 == nullptr) {
      if (isOverflow) {
        iterRet->next = new ListNode{1};
        isOverflow = false;
      }
    } else {
      auto iter3 = (iter1 == nullptr ? iter2 : iter1);
      while (iter3) {
        iterRet->next = new ListNode;
        if (isOverflow) {
          sum = iter3->val + 1;
        } else {
          sum = iter3->val;
        }
        if (sum > 9) {
          isOverflow = true;
          iterRet->next->val = sum - 10;
        } else {
          isOverflow = false;
          iterRet->next->val = sum;
        }
        iterRet = iterRet->next;
        iter3 = iter3->next;
      }
      if (isOverflow) {
        iterRet->next = new ListNode{1, nullptr};
      }
    }
    return head->next;
  }

  // special conditions.
  if (nullptr == l1) {
    return l2;
  } else {
    return l1;
  }
}
} // namespace leetcode
