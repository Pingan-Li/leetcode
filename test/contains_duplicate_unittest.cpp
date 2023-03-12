/**
 * @file contains_duplicate_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/contains_duplicate.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(contains_duplicate, case_0) {
  std::vector<int> vec{1, 1, 1, 2, 3, 4};
  auto flag = ContainsDuplicate(vec);
  EXPECT_TRUE(flag);
}

TEST(contains_duplicate, case_1) {
  std::vector<int> vec{1, 2, 3};
  auto flag = ContainsDuplicate(vec);
  EXPECT_FALSE(flag);
}

TEST(contains_duplicate, case_2) {
  std::vector<int> vec{1};
  auto flag = ContainsDuplicate(vec);
  EXPECT_FALSE(flag);
}

TEST(contains_duplicate, case_3) {
  std::vector<int> vec;
  auto flag = ContainsDuplicate(vec);
  EXPECT_FALSE(flag);
}
}  // namespace leetcode
