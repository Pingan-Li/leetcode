/**
 * @file in_order_traversal.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __LEETCODE_IN_ORDER_TRAVERSAL_H__
#define __LEETCODE_IN_ORDER_TRAVERSAL_H__
#include "tree_node.h"
#include "vector"
namespace leetcode {
std::vector<int> inorderTraversal(TreeNode *root);

void recursiveInorderTraversal(TreeNode*node, std::vector<int> &ret);
} // namespace leetcode

#endif