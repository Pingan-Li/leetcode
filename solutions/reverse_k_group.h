/**
 * @file reverse_k_group.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-08-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_REVERSE_K_GROUP_H_
#define LEETCODE_REVERSE_K_GROUP_H_

#include "solutions/list_node.h"

namespace leetcode {

class ReverseKGroupSolution {
public:
  virtual ListNode *ReverseKGroup(ListNode *head, int k) = 0;
};

class ReverseKGroupSolutionImplA : public ReverseKGroupSolution {
public:
  ListNode *Reverse(ListNode *head);

  ListNode *ReverseKGroup(ListNode *head, int k) override;
};
} // namespace leetcode

#endif