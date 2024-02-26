/**
 * @file unique_paths.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "solutions/dp/unique_paths.h"

#include <array>
#include <cstring>
#include <memory>

#include "testing/googletest/include/gtest/gtest.h"

namespace leetcode {
int SolutionImpl::UniquePaths(int m, int n) {
  auto* dp = new int[m * n]();
  std::memset(dp, 0, m * n);

  dp[0] = 1;
  for (auto i = 0; i < m; ++i) {
    dp[i * n] = 1;
  }

  for (auto j = 0; j < n; ++j) {
    dp[j] = 1;
  }

  for (auto i = 1; i < m; ++i) {
    for (auto j = 1; j < n; ++j) {
      dp[i * n + j] = dp[(i - 1) * n + j] + dp[i * n + j - 1];
    }
  }
  int result = dp[m * n - 1];
  delete[] dp;
  return result;
}
}  // namespace leetcode