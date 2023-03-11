/**
 * @file list_node.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "solutions/list_node.h"

#include <iostream>

namespace leetcode {
ListNode::ListNode() : val(0), next(nullptr) {}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode *next) : val(x), next(next) {}

void printList(const ListNode *head) {
  if (head != nullptr) {
    while (head) {
      std::cout << head->val << " ";
      head = head->next;
    }
    std::cout << std::endl;
  }
}

ListNode *spawnList(const std::vector<int> &elements) {
  ListNode *head = new ListNode;
  ListNode *iter = head;
  for (const auto &e : elements) {
    iter->next = new ListNode(e);
    iter = iter->next;
  }
  return head->next;
}

size_t freeList(ListNode *head) {
  size_t count{0};
  ListNode *temp;
  while (head) {
    temp = head->next;
    free(head);
    head = temp;
    ++count;
  }
  return count;
}

bool equal(const ListNode *list1, const ListNode *list2) {
  if (list1 == nullptr || list2 == nullptr) {
    return false;
  } else {
    auto iter1 = list1;
    auto iter2 = list2;
    while (iter1 && iter2) {
      if (iter1->val != iter2->val) {
        return false;
      }
      iter1 = iter1->next;
      iter2 = iter2->next;
    }
    return (iter1 == nullptr && iter2 == nullptr);
  }
}

size_t length(const ListNode *list) {
  if (list) {
    auto iter = list;
    size_t len{0};
    while (iter) {
      ++len;
      iter = iter->next;
    }
  }
  return 0;
}

} // namespace leetcode
