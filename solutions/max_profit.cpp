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

#include <climits>

namespace leetcode {

int maxProfit(std::vector<int> &prices) {
  int lowestPrice = INT_MAX;
  int higestProfit = 0;
  for (auto p : prices) {
    higestProfit = std::max(higestProfit, p - lowestPrice);
    lowestPrice = std::min(p, lowestPrice);
  }
  return higestProfit;
}

}  // namespace leetcode
