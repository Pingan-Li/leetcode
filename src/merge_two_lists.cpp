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

#include "merge_two_lists.h"
namespace leetcode {
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
  ListNode *dummy = new ListNode;
  ListNode *iter = dummy;
  while (list1 != nullptr && list2 != nullptr) {
    if (list1->val < list2->val) {
      iter->next = list1;
      list1 = list1->next;
    } else {
      iter->next = list2;
      list2 = list2->next;
    }
    iter = iter->next;
  }
  iter->next = list1 == nullptr ? list2 : list1;
  return dummy->next;
}
} // namespace leetcode
