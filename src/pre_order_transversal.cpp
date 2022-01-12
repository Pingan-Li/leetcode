/**
 * @file pre_order_transversal.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "pre_order_transversal.h"

namespace leetcode {

std::vector<int> preorderTraversal(TreeNode *root) {
  std::vector<int> ret;
  recursivePreorderTraversal(root, ret);
  return ret;
}
void recursivePreorderTraversal(TreeNode *node, std::vector<int> &vector) {
  if (node) {
    vector.push_back(node->val);
    recursivePreorderTraversal(node->left, vector);
    recursivePreorderTraversal(node->right, vector);
  } else {
    return;
  }
}
} // namespace leetcode
