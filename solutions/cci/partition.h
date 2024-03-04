/**
 * @file partition.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_PARTITION_H_
#define SOLUTIONS_CCI_PARTITION_H_

#include "solutions/list_node.h"

namespace leetcode {
class Solution {
 public:
  virtual ListNode* Partition(ListNode* head, int x) = 0;
};

class SolutionImpl : public Solution {
 public:
  ListNode* Partition(ListNode* head, int x) override;
};
}  // namespace leetcode
#endif