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

#ifndef LEETCODE_PRE_ORDER_TRAVERAL_H_
#define LEETCODE_PRE_ORDER_TRAVERAL_H_

#include <vector>

#include "solutions/tree_node.h"
namespace leetcode {
/**
 * @brief pre order: root->left->right.
 *
 * @param root
 * @return std::vector<int>
 */
std::vector<int> PreOrderTraversal(TreeNode *root);

void RecursivePreorderTraversal(TreeNode *node, std::vector<int> &ret);

std::vector<int> PreOrderTraversal2(TreeNode *root);
}  // namespace leetcode

#endif  // LEETCODE_PRE_ORDER_TRAVERAL_H_