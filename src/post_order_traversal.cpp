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

#include "post_order_traversal.h"

namespace leetcode {
std::vector<int> postorderTraversal(TreeNode *root) {
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
} // namespace leetcode
