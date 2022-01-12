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

#ifndef __LEETCODE_TREE_NODE_H__
#define __LEETCODE_TREE_NODE_H__
namespace leetcode {
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode();
  TreeNode(int x);
  TreeNode(int x, TreeNode *left, TreeNode *right);
};
} // namespace leetcode
#endif