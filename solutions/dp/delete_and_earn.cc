/**
 * @file delete_and_earn.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/delete_and_earn.h"

#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <vector>

namespace leetcode {
int SolutionImpl::DeleteAndEarn(std::vector<int>& nums) {
  if (nums.empty()) return 0;
  if (nums.size() == 1) return nums[0];

  int max_value = std::numeric_limits<int>::min();
  for (auto n : nums) {
    max_value = std::max(max_value, n);
  }

  std::vector<int> profit;
  profit.resize(max_value + 1, 0);
  for (auto n : nums) {
    profit[n] += n;
  }

  return Earn(profit);
}

int SolutionImpl::Earn(std::vector<int> const& profit) {
  auto n = profit.size();
  std::vector<int> dp(n, 0);

  dp[0] = profit[0];
  dp[1] = std::max(profit[0], profit[1]);

  for (auto i = 2; i < n; ++i) {
    dp[i] = std::max(dp[i - 2] + profit[i], dp[i - 1]);
  }
  return dp.back();
}
}  // namespace leetcode