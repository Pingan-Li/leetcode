/**
 * @file remove_elements.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef LEETCODE_REMOVE_ELEMENTS_H_
#define LEETCODE_REMOVE_ELEMENTS_H_

#include "solutions/list_node.h"

namespace leetcode {
ListNode *RemoveElements(ListNode *head, int val);

ListNode *RemoveElements2(ListNode *head, int val);
}  // namespace leetcode

#endif  // LEETCODE_REMOVE_ELEMENTS_H_