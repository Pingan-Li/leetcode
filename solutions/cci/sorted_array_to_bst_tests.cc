/**
 * @file sorted_array_to_bst_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>
#include <vector>

#include "solutions/cci/sorted_array_to_bst.h"
#include "solutions/tree_node.h"
#include "testing/googletest/include/gtest/gtest.h"

class SortedArrayToBSTTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

void InorderTransveral(leetcode::TreeNode* node) {
  if (!node) return;
  InorderTransveral(node->left);
  std::cout << node->val << ' ';
  InorderTransveral(node->right);
}

TEST_F(SortedArrayToBSTTest, Case0) {
  std::vector<int> nums{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto* tree_node = solution_->SortedArrayToBST(nums);
  InorderTransveral(tree_node);
}
