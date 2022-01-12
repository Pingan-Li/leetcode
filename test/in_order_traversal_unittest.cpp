/**
 * @file in_order_traversal_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "in_order_traversal.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

TEST(in_order_traversal, case_0) {
     leetcode::TreeNode *root = new leetcode::TreeNode{1};
  root->right = new leetcode::TreeNode{2};
  root->left = nullptr;
  root->right->left = new leetcode::TreeNode{3};
  std::vector<int> ret = leetcode::inorderTraversal(root);
  for (auto iter = ret.begin(); iter != ret.end(); iter++) {
    std::cout << *(iter) << std::endl;
  }
}