/**
 * @file is_same_tree.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_SOLUTIONS_IS_SAME_TREE_H_
#define LEETCODE_SOLUTIONS_IS_SAME_TREE_H_

#include "solutions/tree_node.h"
#include <vector>

namespace leetcode {
class IsSameTreeSolution {
public:
  virtual bool IsSameTree(TreeNode *p, TreeNode *q) = 0;
};

// DFS
class IsSameTreeSolutionImplA : public IsSameTreeSolution {
public:
  bool IsSameTree(TreeNode *p, TreeNode *q) override;

  void PreOrder(TreeNode *node, std::vector<int> &values);
};

// Recursive
class IsSameTreeSolutionImplB : public IsSameTreeSolution {
public:
  bool IsSameTree(TreeNode *p, TreeNode *q) override;
};
} // namespace leetcode
#endif