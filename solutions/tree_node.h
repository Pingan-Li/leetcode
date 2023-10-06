/**
 * @file tree_node.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef LEETCODE_TREE_NODE_H_
#define LEETCODE_TREE_NODE_H_

namespace leetcode {

struct TreeNode {
  int val = 0;
  TreeNode *left = nullptr;
  TreeNode *right = nullptr;
  TreeNode();
  TreeNode(int x);
  TreeNode(int x, TreeNode *left, TreeNode *right);
};

} // namespace leetcode
#endif // LEETCODE_TREE_NODE_H_