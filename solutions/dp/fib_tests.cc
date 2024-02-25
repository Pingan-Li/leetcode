/**
 * @file fib_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>

#include "solutions/dp/fib.h"
#include "testing/googletest/include/gtest/gtest.h"

class FibTest : public testing::Test {
 public:
  void SetUp() override {
    trivial_solution_ = std::make_unique<leetcode::TrivialSolution>();
    optimal_solution_ = std::make_unique<leetcode::OptimalSolution>();
  }

  void TearDown() override {}

  std::unique_ptr<leetcode::Solution> trivial_solution_;
  std::unique_ptr<leetcode::Solution> optimal_solution_;
};

TEST_F(FibTest, Case) {
  for (int i = 0; i < 40; ++i) {
    auto r0 = trivial_solution_->Fib(i);
    std::cout << "TrivialSolution: "
              << "Fib(" << i << ") = " << r0 << std::endl;

    auto r1 = optimal_solution_->Fib(i);
    std::cout << "OptimalSolution: "
              << "Fib(" << i << ") = " << r1 << std::endl;

    ASSERT_EQ(r0, r1);
  }
}
