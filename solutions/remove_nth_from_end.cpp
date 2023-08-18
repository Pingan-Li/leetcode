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
#include "solutions/list_node.h"
#include <tuple>

namespace leetcode {
ListNode *RemoveNthFromEnd(ListNode *head, int n) {
  if (!head) {
    return nullptr;
  }

  ListNode mock;
  mock.next = head;
  ListNode *fast = &mock;
  ListNode *slow = &mock;

  for (int i = 0; i < n; ++i) {
    // n is bigger than list size.
    if(!fast->next) {
      return head;
    }
    fast = fast->next;
  }

  while (fast->next) {
    fast = fast->next;
    slow = slow->next;
  }

  ListNode *dropped = slow->next;
  slow->next = slow->next->next;
  delete dropped;
  return mock.next;

  // if (head) {
  //   ListNode *fast = head;
  //   ListNode *slow = head;
  //   while (fast) {
  //     while (n-- && fast) {
  //       fast = fast->next;
  //     }
  //     // if n is bigger than lenth of list.
  //     if (n != -1 && fast) {
  //       return head;
  //     }
  //     ListNode *dropped = nullptr;
  //     // corner case, deleting the head Node.
  //     if (!fast) {
  //       dropped = head;
  //       slow = slow->next;
  //       delete head;
  //       return slow;
  //     } else {
  //       fast = fast->next;
  //       while (nullptr != fast) {
  //         fast = fast->next;
  //         slow = slow->next;
  //       }
  //       dropped = slow->next;
  //       slow->next = dropped->next;
  //       delete dropped;
  //       return head;
  //     }
  //   }
  // }
  // return head;
}
} // namespace leetcode
