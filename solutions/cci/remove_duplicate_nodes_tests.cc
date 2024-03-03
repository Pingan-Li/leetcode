/**
 * @file remove_duplicate_nodes_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>
#include <vector>

#include "solutions/cci/remove_duplicate_nodes.h"
#include "solutions/list_node.h"
#include "testing/googletest/include/gtest/gtest.h"

class RemoveDuplicateNodesTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(RemoveDuplicateNodesTest, Case0) {
  std::vector<int> vector{1, 1, 1, 2, 2, 2, 3, 3, 3};
  auto head = leetcode::SpawnList(vector);
  leetcode::PrintList(head);
  solution_->RemoveDuplicateNodes(head);
  leetcode::PrintList(head);
}

TEST_F(RemoveDuplicateNodesTest, Case1) {
  std::vector<int> vector{1, 1, 1, 1, 1, 1, 1};
  auto head = leetcode::SpawnList(vector);
  leetcode::PrintList(head);
  solution_->RemoveDuplicateNodes(head);
  leetcode::PrintList(head);
}

TEST_F(RemoveDuplicateNodesTest, Case2) {
  std::vector<int> vector{1};
  auto head = leetcode::SpawnList(vector);
  leetcode::PrintList(head);
  solution_->RemoveDuplicateNodes(head);
  leetcode::PrintList(head);
}
TEST_F(RemoveDuplicateNodesTest, Case3) {
  std::vector<int> vector{1, 2, 3, 3, 2, 1, 1, 2, 3, 3, 2, 1};
  auto head = leetcode::SpawnList(vector);
  leetcode::PrintList(head);
  solution_->RemoveDuplicateNodes(head);
  leetcode::PrintList(head);
}