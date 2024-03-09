/**
 * @file detect_cycle_tests.cc
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

#include "solutions/cci/detect_cycle.h"
#include "solutions/list_node.h"
#include "testing/googletest/include/gtest/gtest.h"

class DetectCycleTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }
  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(DetectCycleTest, Case0) {
  std::vector nums{0, 1, 2, 3, 4};
  leetcode::ListNode* list = leetcode::SpawnList(nums);
  list->next->next->next->next->next = list->next->next->next;
  leetcode::ListNode* pos = solution_->DetectCycle(list);
  ASSERT_EQ(list->next->next->next, pos);
  // trival FreeList function cannot free a list with a cycle.
  // leetcode::FreeList(list);
}