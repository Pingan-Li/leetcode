/**
 * @file odd_even_list.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __LEETCODE_ODD_EVEN_LIST_H__
#define __LEETCODE_ODD_EVEN_LIST_H__
#include "list_node.h"
namespace leetcode {
ListNode *oddEvenList(ListNode *head);

ListNode *splitEvenNode(ListNode *head);

ListNode *oddEvenList2(ListNode *head);
} // namespace leetcode

#endif