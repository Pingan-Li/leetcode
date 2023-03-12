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

#ifndef LEETCODE_ODD_EVEN_LIST_H_
#define LEETCODE_ODD_EVEN_LIST_H_

#include "solutions/list_node.h"

namespace leetcode {

ListNode *OddEvenList(ListNode *head);

ListNode *SplitEvenNode(ListNode *head);

ListNode *OddEvenList2(ListNode *head);

}  // namespace leetcode

#endif  // LEETCODE_ODD_EVEN_LIST_H_