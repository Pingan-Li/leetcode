/**
 * @file pre_order_traversal.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/pre_order_traversal.h"

#include <stack>

namespace leetcode {

std::vector<int> PreOrderTraversal(TreeNode *root) {
  std::vector<int> ret;
  RecursivePreorderTraversal(root, ret);
  return ret;
}
void RecursivePreorderTraversal(TreeNode *node, std::vector<int> &vector) {
  if (node) {
    vector.push_back(node->val);
    RecursivePreorderTraversal(node->left, vector);
    RecursivePreorderTraversal(node->right, vector);
  } else {
    return;
  }
}

std::vector<int> PreOrderTraversal2(TreeNode *root) {
  if (root) {
    std::vector<int> ret;
    std::stack<TreeNode *> stack;
    while (root || !stack.empty()) {
      while (root) {
        ret.emplace_back(root->val);
        stack.emplace(root);
        root = root->left;
      }
      root = stack.top();
      stack.pop();
      root = root->right;
    }
    return ret;
  } else {
    return {};
  }
}
}  // namespace leetcode
