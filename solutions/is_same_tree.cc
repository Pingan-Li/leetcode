/**
 * @file is_same_tree.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "solutions/is_same_tree.h"
#include "solutions/tree_node.h"
#include <limits>

namespace leetcode {
bool IsSameTreeSolutionImplA::IsSameTree(TreeNode *a, TreeNode *b) {
  std::vector<int> values_a;
  std::vector<int> values_b;
  PreOrder(a, values_a);
  PreOrder(b, values_b);
  return values_a == values_b;
}

void IsSameTreeSolutionImplA::PreOrder(TreeNode *node,
                                       std::vector<int> &values) {
  if (!node) {
    values.push_back(std::numeric_limits<int>::max());
    return;
  }
  values.push_back(node->val);
  PreOrder(node->left, values);
  PreOrder(node->right, values);
}

bool IsSameTreeSolutionImplB::IsSameTree(TreeNode *p, TreeNode *q) {
  if (!p && !q) {
    return true;
  }
  if (p && !q) {
    return false;
  }
  if (!p && q) {
    return false;
  }
  if (p->val == q->val) {
    return IsSameTree(p->left, q->left) && IsSameTree(p->right, q->right);
  } else {
    return false;
  }
}
} // namespace leetcode