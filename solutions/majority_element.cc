/**
 * @file majority_element.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/majority_element.h"

#include <tuple>
#include <unordered_map>

namespace leetcode {
int MajorityElement(std::vector<int> const &nums) {
  std::unordered_map<int, int> count_map;
  int majority_element = 0, max_count = 0;
  for (auto &&num : nums) {
    int &count = count_map[num];
    ++count;
    if (count > max_count) {
      majority_element = num;
      max_count = count;
    }
  }
  return majority_element;
}
} // namespace leetcode