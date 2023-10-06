/**
 * @file is_same_tree_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <algorithm>
#include <memory>

#include "solutions/is_same_tree.h"
#include "solutions/tree_node.h"
#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
class IsSameTreeSolutionTestHelper : public testing::Test {
public:
  void SetUp() override {
    solution = std::make_unique<IsSameTreeSolutionImplA>();
  }

  void TearDown() override {}

  std::unique_ptr<IsSameTreeSolution> solution;
};

TEST_F(IsSameTreeSolutionTestHelper, Case0) {
  TreeNode root(1);
  TreeNode left(0);
  TreeNode right(2);
  root.right = &right;
  root.left = &left;
  bool result = solution->IsSameTree(&root, &root);
  bool expect = true;
  ASSERT_EQ(result, expect);
}

TEST_F(IsSameTreeSolutionTestHelper, Case1) {
  TreeNode root(1);
  TreeNode left(0);
  TreeNode right(2);
  root.right = &right;
  root.left = &left;
  bool result = solution->IsSameTree(&root, &root);
  bool expect = true;
  ASSERT_EQ(result, expect);
}
} // namespace leetcode