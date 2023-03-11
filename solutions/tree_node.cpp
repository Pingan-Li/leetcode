/**
 * @file tree_node.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/tree_node.h"

namespace leetcode {

TreeNode::TreeNode() : val(0), left(nullptr), right(nullptr) {}

TreeNode::TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

TreeNode::TreeNode(int x, TreeNode *left, TreeNode *right)
    : val(x), left(left), right(right) {}

}  // namespace leetcode
