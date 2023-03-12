/**
 * @file get_intersection_node.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/get_intersection_node.h"

namespace leetcode {
/**
 * @brief Get the Intersection Node object
 *
 * @param headA
 * @param headB
 * @return ListNode*
 */
// 0 > 1 > 2 > 3 > 4 > 5
//                 |
//         0 > 1 > 2
// node 4 is the intersection node.
// it's easy to get it.
// 0 > 1 > 2 > 0 > 1 > 2 > 3 > 4 >5
//                           /
// 0 > 1 > 2 > 0 > 1 > 2 > 3

ListNode *GetIntersectionNode(ListNode *headA, ListNode *headB) {
  if (headA && headB) {
    ListNode *iterA = headA;
    ListNode *iterB = headB;
    while (iterA != iterB) {
      if (iterA == nullptr) {
        iterA = headB;
      } else {
        iterA = iterA->next;
      }

      if (iterB == nullptr) {
        iterB = headA;
      } else {
        iterB = iterB->next;
      }
    }
    return iterA;
  } else {
    return nullptr;
  }
}

}  // namespace leetcode
