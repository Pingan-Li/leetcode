/**
 * @file pre_order_traversal.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __LEETCODE_PRE_ORDER_TRAVERAL_H__
#define __LEETCODE_PRE_ORDER_TRAVERAL_H__
#include <vector>
#include "tree_node.h"
namespace leetcode {
std::vector<int> preorderTraversal(TreeNode *root);

void recursivePreorderTraversal(TreeNode*node, std::vector<int> &ret);
} // namespace leetcode

#endif