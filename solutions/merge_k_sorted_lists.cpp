/**
 * @file merge_k_sorted_lists.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/merge_k_sorted_lists.h"

namespace leetcode {
ListNode *mergeTwoSortedLists(ListNode *list1, ListNode *list2);
/**
 * @brief needs optimization.
 *
 * @param lists
 * @return ListNode*
 */
ListNode *mergeKSortedLists(std::vector<ListNode *> &lists) {
  ListNode *merged;
  if (lists.empty()) {
    merged = nullptr;
  } else {
    merged = lists.front();
    for (std::size_t index = 1; index < lists.size(); ++index) {
      merged = mergeTwoSortedLists(merged, lists[index]);
    }
  }
  return merged;
}
ListNode *mergeTwoSortedLists(ListNode *list1, ListNode *list2) {
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
