/**
 * @file merge_two_lists.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/merge_two_lists.h"

namespace leetcode {
ListNode *MergeTwoLists(ListNode *list1, ListNode *list2) {
  //   ListNode *dummy = new ListNode;
  //   ListNode *iter = dummy;
  //   while (list1 != nullptr && list2 != nullptr) {
  //     if (list1->val < list2->val) {
  //       iter->next = list1;
  //       list1 = list1->next;
  //     } else {
  //       iter->next = list2;
  //       list2 = list2->next;
  //     }
  //     iter = iter->next;
  //   }
  //   iter->next = list1 == nullptr ? list2 : list1;
  //   return dummy->next;
  //------------------MEMORY_LEAK----------------------//
  // dummy is not deleted.
  if (list1 && list2) {
    ListNode *real;
    ListNode *iter;
    if (list1->val < list2->val) {
      real = list1;
      list1 = list1->next;
    } else {
      real = list2;
      list2 = list2->next;
    }
    iter = real;
    while (list1 && list2) {
      if (list1->val < list2->val) {
        iter->next = list1;
        list1 = list1->next;
      } else {
        iter->next = list2;
        list2 = list2->next;
      }
      iter = iter->next;
    }
    iter->next = ((list1) ? list1 : list2);
    return real;
  }
  return list1 ? list1 : list2;
}

}  // namespace leetcode
