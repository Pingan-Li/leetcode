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
#include "solutions/list_node.h"
#include <vector>

namespace leetcode {

ListNode *MergeTwoSortedLists(ListNode *list1, ListNode *list2) {
  ListNode dummy;
  ListNode *iter = &dummy;

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
  iter->next = list1 ? list1 : list2;
  return dummy.next;
}

ListNode *Merge(std::vector<ListNode *> &lists, int left, int right) {
  if (left == right)
    return lists[left];
  if (left > right)
    return nullptr;
  int mid = (right + left) >> 1;
  return MergeTwoSortedLists(Merge(lists, left, mid),
                             Merge(lists, mid + 1, right));
}
/**
 * @brief needs optimization.
 *
 * @param lists
 * @return ListNode*
 */

ListNode *MergeKSortedLists(std::vector<ListNode *> &lists) {
    return Merge(lists, 0, lists.size() - 1);
}

// ListNode *MergeTwoSortedLists(ListNode *list1, ListNode *list2) {
//   if (list1 && list2) {
//     ListNode *real;
//     ListNode *iter;
//     if (list1->val < list2->val) {
//       real = list1;
//       list1 = list1->next;
//     } else {
//       real = list2;
//       list2 = list2->next;
//     }
//     iter = real;
//     while (list1 && list2) {
//       if (list1->val < list2->val) {
//         iter->next = list1;
//         list1 = list1->next;
//       } else {
//         iter->next = list2;
//         list2 = list2->next;
//       }
//       iter = iter->next;
//     }
//     iter->next = ((list1) ? list1 : list2);
//     return real;
//   }
//   return list1 ? list1 : list2;
// }

} // namespace leetcode
