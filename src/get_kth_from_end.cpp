/**
 * @file get_kth_from_end.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "list_node.h"
namespace leetcode {
ListNode *getKthFromEnd(ListNode *head, int k) {
  ListNode *rush = head;
  while (k--) {
    rush = rush->next;
  }
  while (rush) {
    rush = rush->next;
    head = head->next;
  }
  return head;
}
} // namespace leetcode
