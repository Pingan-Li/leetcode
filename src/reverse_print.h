/**
 * @file reverse_print.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __LEETCODE_REVERSE_PRINT_H__
#define __LEETCODE_REVERSE_PRINT_H__
#include "list_node.h"
#include "vector"
namespace leetcode {
void recursiveGet(ListNode *head, std::vector<int> &vec);
std::vector<int> reversePrint(ListNode *head);

std::vector<int> reversePrint2(ListNode *head);
} // namespace leetcode

#endif