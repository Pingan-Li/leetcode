/**
 * @file invert_tree.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "solutions/invert_tree.h"
#include <utility>
namespace leetcode {
TreeNode *InvertTreeSolutionA::InvertTree(TreeNode *root) {
  Invert(root);
  return root;
}

void InvertTreeSolutionA::Invert(TreeNode *node) {
  if (!node)
    return;
  std::swap(node->left, node->right);
  Invert(node->left);
  Invert(node->right);
}
} // namespace leetcode
