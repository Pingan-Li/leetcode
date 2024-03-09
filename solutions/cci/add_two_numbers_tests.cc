/**
 * @file add_two_numbers_tests.cc
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

#include "solutions/cci/add_two_numbers.h"
#include "solutions/list_node.h"
#include "testing/googletest/include/gtest/gtest.h"

class AddTwoNumbersTest : public testing::Test {
 public:
  void SetUp() override {
    solution_ = std::make_unique<leetcode::SolutionImpl>();
  }

  std::unique_ptr<leetcode::Solution> solution_;
};

TEST_F(AddTwoNumbersTest, Case0) {
  std::vector vec1{1, 2, 3, 4, 5};
  std::vector vec2{6, 7, 8, 9, 0};
  auto list1 = leetcode::SpawnList(vec1);
  auto list2 = leetcode::SpawnList(vec2);
  PrintList(list1);
  PrintList(list2);
  auto ret = solution_->AddTwoNumbers(list1, list2);
  PrintList(ret);
}

TEST_F(AddTwoNumbersTest, Case1) {
  std::vector vec2{9};
  auto list2 = leetcode::SpawnList(vec2);
  PrintList(list2);
  auto ret = solution_->AddTwoNumbers(nullptr, list2);
  PrintList(ret);
}

TEST_F(AddTwoNumbersTest, Case2) {
  std::vector vec2{9};
  auto list2 = leetcode::SpawnList(vec2);
  PrintList(list2);
  auto ret = solution_->AddTwoNumbers(nullptr, nullptr);
  PrintList(ret);
}

TEST_F(AddTwoNumbersTest, Case3) {
  std::vector vec1{9, 9, 9};
  std::vector vec2{1, 1, 1};
  auto list1 = leetcode::SpawnList(vec1);
  auto list2 = leetcode::SpawnList(vec2);
  PrintList(list1);
  PrintList(list2);
  auto ret = solution_->AddTwoNumbers(list1, list2);
  PrintList(ret);
}

TEST_F(AddTwoNumbersTest, Case4) {
  std::vector vec1{9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
                   9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
                   9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
                   9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
  std::vector vec2{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  auto list1 = leetcode::SpawnList(vec1);
  auto list2 = leetcode::SpawnList(vec2);
  PrintList(list1);
  PrintList(list2);
  auto ret = solution_->AddTwoNumbers(list1, list2);
  PrintList(ret);
}