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

#ifndef __LEETCODE_REMOVE_ELEMENTS_H__
#define __LEETCODE_REMOVE_ELEMENTS_H__
#include "list_node.h"
namespace leetcode {
ListNode *removeElements(ListNode *head, int val);

ListNode *removeElements2(ListNode *head, int val);
} // namespace leetcode

#endif