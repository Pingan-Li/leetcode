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
    /**
     * @brief left->root->right
     * 
     * @param root 
     * @return std::vector<int> 
     */
std::vector<int> inOrderTraversal(TreeNode *root);

void recursiveInorderTraversal(TreeNode*node, std::vector<int> &ret);

std::vector<int> inOrderTraversal2(TreeNode *root);
} // namespace leetcode

#endif