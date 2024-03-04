/**
 * @file partition_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>
#include <vector>

#include "solutions/cci/partition.h"
#include "solutions/list_node.h"
#include "testing/googletest/include/gtest/gtest.h"

class PartitionTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }
  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(PartitionTest, Case0) {
  std::vector<int> vector{7, 6, 5, 4, 3, 2, 1, 0};
  auto head = leetcode::SpawnList(vector);
  leetcode::PrintList(head);
  auto *result = solution_->Partition(head, 4);
  leetcode::PrintList(result);
}

TEST_F(PartitionTest, Case1) {
  std::vector<int> vector{1, 2};
  auto head = leetcode::SpawnList(vector);
  leetcode::PrintList(head);
  auto *result = solution_->Partition(head, 3);
  leetcode::PrintList(result);
}

TEST_F(PartitionTest, Case2) {
  std::vector<int> vector{4, 5};
  auto head = leetcode::SpawnList(vector);
  leetcode::PrintList(head);
  auto *result = solution_->Partition(head, 3);
  leetcode::PrintList(result);
}