/**
 * @file in_order_traversal.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "in_order_traversal.h"
namespace leetcode {
std::vector<int> inorderTraversal(TreeNode *root) {
  std::vector<int> ret;
  recursiveInorderTraversal(root, ret);
  return ret;
}

void recursiveInorderTraversal(TreeNode *node, std::vector<int> &vector) {
  if (node) {
    recursiveInorderTraversal(node->left, vector);
    vector.push_back(node->val);
    recursiveInorderTraversal(node->right, vector);
  } else {
    return;
  }
}
} // namespace leetcode
