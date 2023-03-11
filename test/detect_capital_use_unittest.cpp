/**
 * @file detect_capital_use_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/detect_capital_use.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(detect_capitail_use, case_0) {
  bool result = detectCapitalUse("APPLE");
  EXPECT_TRUE(result);
}

TEST(detect_capitail_use, case_1) {
  bool result = detectCapitalUse("aPPLE");
  EXPECT_FALSE(result);
}
}  // namespace leetcode
