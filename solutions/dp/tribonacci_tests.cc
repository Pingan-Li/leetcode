/**
 * @file tribonacci_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/dp/tribonacci.h"
#include "testing/googletest/include/gtest/gtest.h"

class TribonacciTest : public testing::Test {
 public:
  void SetUp() override {
    trivail_solution_ = std::make_unique<leetcode::TrivialSolution>();
    optimal_solution_ = std::make_unique<leetcode::OptimalSolution>();
  }

  std::unique_ptr<leetcode::Solution> trivail_solution_;
  std::unique_ptr<leetcode::Solution> optimal_solution_;
};

TEST_F(TribonacciTest, Case0) {
  for (int i = 0; i < 50; ++i) {
    auto r0 = trivail_solution_->Tribonacci(i);
    std::cout << "TrivialSolution::Tribonacci(" << i << ") = " << r0
              << std::endl;

    auto r1 = optimal_solution_->Tribonacci(i);
    std::cout << "OptimalSolution::uTribonacci(" << i << ") = " << r1
              << std::endl;
    ASSERT_EQ(r0, r1);
  }
}