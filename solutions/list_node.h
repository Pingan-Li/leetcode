/**
 * @file list_node.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-30
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Definition for singly-linked list.
 */

#ifndef LIST_NODE_H_
#define LIST_NODE_H_

#include <vector>

namespace leetcode {
struct ListNode {
  int val;
  ListNode *next;
  ListNode();
  ListNode(int x);
  ListNode(int x, ListNode *next);
};

void PrintList(const ListNode *head);

ListNode *SpawnList(const std::vector<int> &elements);

std::size_t FreeList(ListNode *head);

bool Equal(const ListNode *list1, const ListNode *list2);

std::size_t Length(const ListNode *list);
}  // namespace leetcode

#endif  // LIST_NODE_H_