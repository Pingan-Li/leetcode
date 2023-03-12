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

#include "solutions/in_order_traversal.h"

#include <stack>

namespace leetcode {
std::vector<int> InOrderTraversal(TreeNode *root) {
  std::vector<int> ret;
  RecursiveInorderTraversal(root, ret);
  return ret;
}

void RecursiveInorderTraversal(TreeNode *node, std::vector<int> &vector) {
  if (node) {
    RecursiveInorderTraversal(node->left, vector);
    vector.push_back(node->val);
    RecursiveInorderTraversal(node->right, vector);
  } else {
    return;
  }
}
std::vector<int> InOrderTraversal2(TreeNode *root) {
  if (root) {
    std::vector<int> ret;
    std::stack<TreeNode *> stack;
    while (root || !stack.empty()) {
      while (root) {
        stack.push(root);
        root = root->left;
      }
      root = stack.top();
      stack.pop();
      ret.emplace_back(root->val);
      root = root->right;
    }
    return ret;
  } else {
    return {};
  }
}
}  // namespace leetcode
