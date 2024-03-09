/**
 * @file sorted_array_to_bst.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SORTED_ARRAY_TO_BST_H_
#define SORTED_ARRAY_TO_BST_H_

#include <vector>

#include "solutions/tree_node.h"

namespace leetcode {
class Solution {
 public:
  virtual TreeNode* SortedArrayToBST(std::vector<int>& nums) = 0;
};

class SolutionImpl : public Solution {
  TreeNode* SortedArrayToBST(std::vector<int>& nums) override;
};
}  // namespace leetcode
#endif  // SORTED_ARRAY_TO_BST_H_