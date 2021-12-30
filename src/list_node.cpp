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

#include "list_node.h"

#include <iostream>
namespace leetcode {
void printList(const ListNode* head) {
  const ListNode* iter = head;
  while (iter) {
    std::cout << iter->val << " ";
    iter = iter->next;
  }
  std::cout << std::endl;
}

ListNode* spawList(const std::vector<int>& elements) {
  ListNode* head = new ListNode;
  ListNode* iter = head;
  for (const auto& e : elements) {
    iter->next = new ListNode(e);
    iter = iter->next;
  }
  return head->next;
}

bool equal(const ListNode* list1, const ListNode* list2) {
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

size_t length(const ListNode* list) {
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

}  // namespace leetcode
