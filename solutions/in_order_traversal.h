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

#ifndef LEETCODE_IN_ORDER_TRAVERSAL_H_
#define LEETCODE_IN_ORDER_TRAVERSAL_H_

#include <vector>

#include "solutions/tree_node.h"

namespace leetcode {
/**
 * @brief left->root->right
 *
 * @param root
 * @return std::vector<int>
 */
std::vector<int> InOrderTraversal(TreeNode *root);

void RecursiveInorderTraversal(TreeNode *node, std::vector<int> &ret);

std::vector<int> InOrderTraversal2(TreeNode *root);

}  // namespace leetcode

#endif  // LEETCODE_IN_ORDER_TRAVERSAL_H_