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
#include "tree_node.h"
#include <vector>
namespace leetcode {
/**
 * @brief pre order: root->left->right.
 *
 * @param root
 * @return std::vector<int>
 */
std::vector<int> preOrderTraversal(TreeNode *root);

void recursivePreorderTraversal(TreeNode *node, std::vector<int> &ret);

std::vector<int> preOrderTraversal2(TreeNode *root);
} // namespace leetcode

#endif