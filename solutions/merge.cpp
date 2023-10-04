/**
 * @file merge.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-24
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/merge.h"

#include <algorithm>
#include <cstddef>

namespace leetcode {

void Merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
  int index_1 = m - 1;
  int index_2 = n - 1;
  int tail = m + n - 1;
  int current;
  while (index_1 >= 0 || index_2 >= 0) {
    // nums1 has run out.
    if (index_1 == -1) {
      current = nums2[index_2--];
      // nums2 has run out.
    } else if (index_2 == -1) {
      current = nums1[index_1--];
      // find the bigger one.
    } else if (nums1[index_1] > nums2[index_2]) {
      current = nums1[index_1--];
    } else {
      current = nums2[index_2--];
    }
    nums1[tail--] = current;
  }
}
} // namespace leetcode
