/**
 * @file remove_nth_from_end.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/remove_nth_from_end.h"

namespace leetcode {
ListNode *RemoveNthFromEnd(ListNode *head, int n) {
  if (head) {
    ListNode *fast = head;
    ListNode *slow = head;
    while (nullptr != fast) {
      while (n-- && nullptr != fast) {
        fast = fast->next;
      }
      // if n is bigger than lenth of list.
      if (n != -1 && fast != nullptr) {
        return head;
      }
      ListNode *dropped = nullptr;
      // corner case, deleting the head Node.
      if (nullptr == fast) {
        dropped = head;
        slow = slow->next;
        delete head;
        return slow;
      } else {
        fast = fast->next;
        while (nullptr != fast) {
          fast = fast->next;
          slow = slow->next;
        }
        dropped = slow->next;
        slow->next = dropped->next;
        delete dropped;
        return head;
      }
    }
  }
  return head;
}
}  // namespace leetcode
