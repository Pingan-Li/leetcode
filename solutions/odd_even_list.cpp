/**
 * @file odd_even_list.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/odd_even_list.h"

namespace leetcode {
ListNode *OddEvenList(ListNode *head) {
  if (head && head->next) {
    ListNode *even = SplitEvenNode(head);
    ListNode *odd = head;
    while (odd->next) {
      odd = odd->next;
    }
    odd->next = even;
    return head;
  } else {
    return head;
  }
}

ListNode *SplitEvenNode(ListNode *head) {
  if (head && head->next) {
    ListNode *temp = head->next;
    head->next = temp->next;
    temp->next = SplitEvenNode(temp->next);
    return temp;
  } else {
    return nullptr;
  }
}

ListNode *OddEvenList2(ListNode *head) {
  if (head) {
    ListNode *evenHead = head->next;
    ListNode *evenIter = evenHead;
    ListNode *oddIter = head;
    while (evenIter && evenIter->next) {
      oddIter->next = evenIter->next;
      oddIter = oddIter->next;
      evenIter->next = oddIter->next;
      evenIter = evenIter->next;
    }
    oddIter->next = evenHead;
    return head;
  } else {
    return nullptr;
  }
}
}  // namespace leetcode
