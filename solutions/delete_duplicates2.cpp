/**
 * @file delete_duplicates2.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/delete_duplicates2.h"

namespace leetcode {
ListNode *deleteDuplicates2(ListNode *head) {
  if (head) {
    ListNode *dummy = new ListNode{-1, head};
    ListNode *iter = dummy;
    ListNode *temp;
    ListNode *temp2;
    while (iter->next && iter->next->next) {
      if (iter->next->val == iter->next->next->val) {
        temp = iter->next;
        while (temp->next && temp->next->val == iter->next->val) {
          temp = temp->next;
        }
        temp2 = iter->next;
        iter->next = temp->next;
        temp->next = nullptr;
        leetcode::freeList(temp2);
      } else {
        iter = iter->next;
      }
    }
    temp = dummy->next;
    delete dummy;
    return temp;
  } else {
    return nullptr;
  }
}
} // namespace leetcode
