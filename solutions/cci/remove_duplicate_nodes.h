/**
 * @file remove_duplicate_nodes.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_DUPLICATE_NODES_H_
#define SOLUTIONS_CCI_DUPLICATE_NODES_H_

#include "solutions/list_node.h"

namespace leetcode {
class Solution {
 public:
  virtual ListNode* RemoveDuplicateNodes(ListNode* head) = 0;
};

class SolutionImpl : public Solution {
 public:
  ListNode* RemoveDuplicateNodes(ListNode* head) override;
};
}  // namespace leetcode
#endif