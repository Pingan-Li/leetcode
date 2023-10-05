/**
 * @file rotate_tests.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <memory>
#include <vector>

#include "base/auxiliary.h"
#include "solutions/rotate.h"
#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
class RotateSolutionTestHelper : public testing::Test {
public:
  void SetUp() override { solution = std::make_unique<RotateSolutionImplC>(); }

  void TearDown() override {}

  std::unique_ptr<RotateSolution> solution;
};

TEST_F(RotateSolutionTestHelper, Case0) {
  int k = 2;
  std::vector<int> nums = {1, 2, 3, 4, 5};
  std::vector<int> expect = {4, 5, 1, 2, 3};
  base::Print(nums.begin(), nums.end());
  solution->Rotate(nums, k);
  base::Print(nums.begin(), nums.end());
  ASSERT_EQ(nums, expect);
}

TEST_F(RotateSolutionTestHelper, Case1) {
  int k = 3;
  std::vector<int> nums = {1, 2, 3, 4, 5};
  std::vector<int> expect = {3, 4, 5, 1, 2};
  base::Print(nums.begin(), nums.end());
  solution->Rotate(nums, k);
  base::Print(nums.begin(), nums.end());
  ASSERT_EQ(nums, expect);
}

TEST_F(RotateSolutionTestHelper, Case2) {
  int k = 2;
  std::vector<int> nums = {0, 1, 2, 3, 4, 5};
  std::vector<int> expect{4, 5, 0, 1, 2, 3};
  base::Print(nums.begin(), nums.end());
  solution->Rotate(nums, k);
  base::Print(nums.begin(), nums.end());
  ASSERT_EQ(nums, expect);
}

TEST_F(RotateSolutionTestHelper, Case3) {
  int k = 3;
  std::vector<int> nums = {0, 1, 2, 3, 4, 5};
  std::vector<int> expect = {3, 4, 5, 0, 1, 2};
  base::Print(nums.begin(), nums.end());
  solution->Rotate(nums, k);
  base::Print(nums.begin(), nums.end());
  ASSERT_EQ(nums, expect);
}

TEST_F(RotateSolutionTestHelper, Case4) {
  int k = 2;
  std::vector<int> nums = {1, 2};
  std::vector<int> expect = {1, 2};
  base::Print(nums.begin(), nums.end());
  solution->Rotate(nums, k);
  base::Print(nums.begin(), nums.end());
  ASSERT_EQ(nums, expect);
}
} // namespace leetcode