/**
 * @file max_sub_array.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/max_sub_array.h"

#include <algorithm>
namespace leetcode {
/**
 * @brief -
 *
 * @param nums
 * @return int
 */
int MaxSubArray(std::vector<int> &nums) {
  int prev{0};
  int result{nums.front()};
  int temp{0};
  for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
    temp = prev + *iter;
    prev = temp > *iter ? temp : *iter;
    result = result > prev ? result : prev;
  }
  return result;
}
}  // namespace leetcode
