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

#ifndef LEETCODE_REVERSE_PRINT_H_
#define LEETCODE_REVERSE_PRINT_H_

#include <vector>

#include "solutions/list_node.h"

namespace leetcode {

void recursiveGet(ListNode *head, std::vector<int> &vec);
std::vector<int> reversePrint(ListNode *head);

std::vector<int> reversePrint2(ListNode *head);

}  // namespace leetcode

#endif  // LEETCODE_REVERSE_PRINT_H_