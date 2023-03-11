/**
 * @file split_list_to_parts.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef LEETCODE_SPLIT_LIST_TO_PARTS_H_
#define LEETCODE_SPLIT_LIST_TO_PARTS_H_

#include "solutions/list_node.h"
#include <vector>

namespace leetcode {
std::vector<ListNode *> splitListToParts(ListNode *head, int k);
} // namespace leetcode

#endif