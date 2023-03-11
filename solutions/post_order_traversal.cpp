/**
 * @file post_order_traversal.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/post_order_traversal.h"

#include <stack>

namespace leetcode {
std::vector<int> postOrderTraversal(TreeNode *root) {
  std::vector<int> ret;
  recursivePostorderTraversal(root, ret);
  return ret;
}

void recursivePostorderTraversal(TreeNode *node, std::vector<int> &vector) {
  if (node) {
    recursivePostorderTraversal(node->left, vector);
    recursivePostorderTraversal(node->right, vector);
    vector.push_back(node->val);
  } else {
    return;
  }
}
std::vector<int> postOrderTraversal2(TreeNode *root) {
  if (root) {
    std::vector<int> ret;
    std::stack<TreeNode *> stack;
    TreeNode *prev = nullptr;
    while (root || !stack.empty()) {
      while (root != nullptr) {
        stack.emplace(root);
        root = root->left;
      }
      root = stack.top();
      stack.pop();
      if (root->right == nullptr || root->right == prev) {
        ret.emplace_back(root->val);
        prev = root;
        root = nullptr;
      } else {
        stack.emplace(root);
        root = root->right;
      }
    }
    return ret;
  } else {
    return {};
  }
}
}  // namespace leetcode
