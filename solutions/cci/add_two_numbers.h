/**
 * @file add_two_numbers.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_ADD_TWO_NUMBERS_H_
#define SOLUTIONS_CCI_ADD_TWO_NUMBERS_H_

#include "solutions/list_node.h"

namespace leetcode {
class Solution {
 public:
  virtual ListNode* AddTwoNumbers(ListNode* l1, ListNode* l2) = 0;
};

class SolutionImpl : public Solution {
 public:
  ListNode* AddTwoNumbers(ListNode* l1, ListNode* l2) override;
};
}  // namespace leetcode
#endif