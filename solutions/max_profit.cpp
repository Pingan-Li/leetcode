/**
 * @file max_profit.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/max_profit.h"

#include <limits>

namespace leetcode {

int MaxProfit(std::vector<int> &prices) {
  int lowest_price = std::numeric_limits<int>::max();
  int highest_profit = 0;
  for (auto price : prices) {
    highest_profit = std::max(highest_profit, price - lowest_price);
    lowest_price = std::min(price, lowest_price);
  }
  return highest_profit;
}

} // namespace leetcode
