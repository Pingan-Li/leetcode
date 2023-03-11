/**
 * @file max_profit_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/max_profit.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(max_profit, case_0) {
  std::vector<int> p{12, 2, 3, 4, 3, 3, 6, 9, 7, 34, 4, 2, 23};
  int profit = maxProfit(p);
  EXPECT_EQ(profit, 32);
}

}  // namespace leetcode
