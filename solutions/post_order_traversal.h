/**
 * @file post_order_traversal.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef LEETCODE_POST_ORDER_TRAVERSAL_H_
#define LEETCODE_POST_ORDER_TRAVERSAL_H_

#include <vector>

#include "solutions/tree_node.h"

namespace leetcode {
std::vector<int> PostOrderTraversal(TreeNode *root);

void RecursivePostorderTraversal(TreeNode *node, std::vector<int> &ret);

std::vector<int> PostOrderTraversal2(TreeNode *root);
}  // namespace leetcode

#endif  // LEETCODE_POST_ORDER_TRAVERSAL_H_