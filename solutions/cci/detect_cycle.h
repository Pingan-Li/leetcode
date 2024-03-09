/**
 * @file detect_cycle.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_DETECT_CYCLE_H_
#define SOLUTIONS_CCI_DETECT_CYCLE_H_

#include "solutions/list_node.h"

namespace leetcode {
class Solution {
 public:
  virtual ListNode *DetectCycle(ListNode *head) = 0;
};

class SolutionImpl : public Solution {
 public:
  ListNode *DetectCycle(ListNode *head) override;
};
}  // namespace leetcode
#endif  // SOLUTIONS_CCI_DETECT_CYCLE_H_