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

#include <vector>

#include "solutions/list_node.h"

namespace leetcode {
std::vector<ListNode *> SplitListToParts(ListNode *head, int k);
}  // namespace leetcode

#endif  // LEETCODE_SPLIT_LIST_TO_PARTS_H_