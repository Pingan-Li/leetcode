/**
 * @file contains_duplicate.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "contains_duplicate.h"
#include "unordered_set"
namespace leetcode {
bool containsDuplicate(std::vector<int> &nums) {
  std::unordered_set<int> set;
  for (auto n : nums) {
    auto pair = set.insert(n);
    if (!pair.second) {
      return true;
    }
  }
  return false;
}
} // namespace leetcode
