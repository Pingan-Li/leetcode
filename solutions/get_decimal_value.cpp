/**
 * @file get_decimal_value.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/get_decimal_value.h"

namespace leetcode {
int getDecimalValue(ListNode *head) {
  int ret{0};
  while (head) {
    ret = ret * 2 + head->val;
    head = head->next;
  }
  return ret;
}

} // namespace leetcode