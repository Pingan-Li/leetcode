/**
 * @file reverse_list.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef LEETCODE_REVERSE_LIST_H_
#define LEETCODE_REVERSE_LIST_H_

#include "solutions/list_node.h"

namespace leetcode {

ListNode *ReverseList(ListNode *head);

class ReverseListSolution {
public:
  virtual ListNode *ReverseList(ListNode *head) = 0;
};

class ReverseListSolutionImplA : public ReverseListSolution {
public:
  ListNode *ReverseList(ListNode *head) override;
};

class ReverseListSolutionImplB : public ReverseListSolution {
public:
  ListNode *ReverseList(ListNode *head) override;
};
} // namespace leetcode

#endif // LEETCODE_REVERSE_LIST_H_