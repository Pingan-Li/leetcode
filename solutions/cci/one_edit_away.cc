/**
 * @file one_edit_away.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/one_edit_away.h"

namespace leetcode {
bool SolutionImpl::OneEditAway(std::string first, std::string second) {
  auto diff = static_cast<int long long>(first.size() - second.size());
  switch (diff) {
    case 0: {
      int cnt = 0;
      for (auto i = 0ull; i < first.size(); ++i) {
        if (first[i] != second[i]) ++cnt;
      }

      return cnt == 0 || cnt == 1;
    }
    case 1: {
      int cnt = 0;
      for (auto i = 0ull; i < second.size(); ++i) {
        if (first[i + cnt] != second[i]) {
          --i;
          ++cnt;
        }
        if (cnt >= 2) {
          return false;
        }
      }
      return cnt == 0 || cnt == 1;
    }

    case -1: {
      int cnt = 0;
      for (auto i = 0ull; i < first.size(); ++i) {
        if (first[i] != second[i + cnt]) {
          --i;
          ++cnt;
        }
        if (cnt >= 2) {
          return false;
        }
      }
      return cnt == 0 || cnt == 1;
    }
  }
  return false;
}
}  // namespace leetcode