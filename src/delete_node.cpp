/**
 * @file delete_node.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "delete_node.h"
namespace leetcode {
void deleteNode(ListNode *node) {
  ListNode *temp = node->next;
  node->val = node->next->val;
  node->next = node->next->next;
  delete temp;
}
} // namespace leetcode
