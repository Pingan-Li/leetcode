/**
 * @file smallest_difference.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-16
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/smallest_difference.h"

#include <cstdint>
#include <vector>

namespace leetcode {

int SolutionImpl::SmallestDifference(std::vector<int>& a, std::vector<int>& b) {
  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());

  std::int64_t diff = std::max(a.front(), b.back());

  int ia = 0;
  int ib = 0;
  while (ia < a.size() && ib < b.size()) {
    diff =
        std::min(diff, std::abs((std::int64_t)(a[ia]) - (std::int64_t)(b[ib])));

    if (a[ia] < b[ib])
      ++ia;
    else if (a[ia] > b[ib])
      ++ib;
    else
      return 0;
  }
  return diff;
}

}  // namespace leetcode