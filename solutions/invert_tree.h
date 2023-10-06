/**
 * @file invert_tree.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_SOLUTIONS_INVERT_TREE_H_
#define LEETCODE_SOLUTIONS_INVERT_TREE_H_

#include "solutions/tree_node.h"

namespace leetcode {
class InvertTreeSolution {
public:
  virtual TreeNode *InvertTree(TreeNode *root) = 0;
};

class InvertTreeSolutionA : public InvertTreeSolution {
public:
  TreeNode *InvertTree(TreeNode *root) override;

  void Invert(TreeNode* node);
};
} // namespace leetcode
#endif