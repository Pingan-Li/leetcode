/**
 * @file ways_to_step.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/ways_to_step.h"

namespace leetcode {
int SolutionImpl::WaysToStep(int n) {
  switch (n) {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 4;
    case 4:
      return 7;
    default: {
      auto w1 = 1LL;
      auto w2 = 2LL;
      auto w3 = 4LL;
      auto w4 = w1 + w2 + w3;
      for (auto i = 4; i < n; ++i) {
        w1 = w2;
        w2 = w3;
        w3 = w4;
        w4 = (w1 + w2 + w3) % 1000000007LL;
      }
      return w4;
    }
  }
}
}  // namespace leetcode