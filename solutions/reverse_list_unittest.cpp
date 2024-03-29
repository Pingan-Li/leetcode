/**
 * @file reverse_list_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/reverse_list.h"

#include "testing/googletest/include/gtest/gtest.h"
#include <memory>

namespace leetcode {
class ReverseListSolutionTestHelper : public testing::Test {
public:
  void SetUp() override {
    solution = std::make_unique<ReverseListSolutionImplA>();
  }
  std::unique_ptr<ReverseListSolution> solution;
};
TEST_F(ReverseListSolutionTestHelper, Case0) {
  std::vector<int> vec{1, 2, 3, 4, 5};
  ListNode *head = SpawnList(vec);
  PrintList(head);
  ListNode *ret = ReverseList(head);
  PrintList(ret);
}

TEST_F(ReverseListSolutionTestHelper, Case1) {
  ListNode *ret = ReverseList(nullptr);
  PrintList(ret);
}

TEST_F(ReverseListSolutionTestHelper, Case2) {
  std::vector<int> vec{1, 2};
  ListNode *head = SpawnList(vec);
  PrintList(head);
  ListNode *ret = ReverseList(head);
  PrintList(ret);
}

} // namespace leetcode
