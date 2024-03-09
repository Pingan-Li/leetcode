/**
 * @file sorted_array_to_bst.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/sorted_array_to_bst.h"

namespace leetcode {
TreeNode* Helper(std::vector<int>& nums, int left, int right) {
  if (left > right) {
    return nullptr;
  }

  auto mid = (left + right) / 2;

  auto* root = new TreeNode(nums[mid]);
  root->left = Helper(nums, left, mid - 1);
  root->right = Helper(nums, mid + 1, right);
  return root;
}

TreeNode* SolutionImpl::SortedArrayToBST(std::vector<int>& nums) {
  if (nums.empty()) return nullptr;
  return Helper(nums, 0, nums.size() - 1);
}
}  // namespace leetcode