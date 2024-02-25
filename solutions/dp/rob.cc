/**
 * @file rob.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/rob.h"

#include <algorithm>
#include <vector>

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
int SolutionImpl::Rob(std::vector<int>& nums) {
  if (nums.empty()) return 0;
  if (nums.size() == 1) return nums.front();
  int n = nums.size();
  std::vector<int> dp(n, 0);
  dp[0] = nums[0];
  dp[1] = std::max(nums[0], nums[1]);
  for (auto i = 2; i < n; ++i) {
    dp[i] = std::max(dp[i - 1], dp[i - 2] + nums[i]);
  }
  return dp.back();

  // dp N + 1;

  // if (nums.empty()) return 0;
  // int n = nums.size();
  // std::vector<int> dp(n + 1, 0);
  // dp[0] = 0;
  // dp[1] = nums[0];
  // for (auto i = 2; i <= n; ++i) {
  //   dp[i] = std::max(dp[i - 1], dp[i - 2] + nums[i - 1]);
  // }
  // return dp[n];
}
}  // namespace leetcode