/**
 * @file rotate.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/rotate.h"

#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
namespace leetcode {
void Rotate(std::vector<int> &nums, int k) {
  if (nums.empty() || nums.size() == 1 || k == 0) {
    return;
  }
  std::vector<int> result(nums.size());
  k = k % nums.size();
  for (int i = 0; i < nums.size(); ++i) {
    result[(i + k) % result.size()] = nums[i];
  }
  nums.swap(result);
}

void RotateSolutionImplA::Rotate(std::vector<int> &nums, int k) {
  if (nums.empty() || nums.size() == 1 || k == 0) {
    return;
  }
  std::vector<int> result(nums.size());
  k = k % nums.size();
  for (int i = 0; i < nums.size(); ++i) {
    result[(i + k) % result.size()] = nums[i];
  }
  nums.swap(result);
}

void RotateSolutionImplB::Rotate(std::vector<int> &nums, int k) {
  int n = nums.size();
  k = k % n;
  int count = std::gcd(k, n);
  for (int start = 0; start < count; ++start) {
    int current = start;
    int prev = nums[start];
    do {
      int next = (current + k) % n;
      std::swap(nums[next], prev);
      current = next;
    } while (start != current);
  }
}

void RotateSolutionImplC::Rotate(std::vector<int> &nums, int k) {
  if (nums.size() == 1 || nums.empty()) {
    return;
  }
  k %= nums.size();
  if (k == 0) {
    return;
  }
  Reverse(nums, 0, nums.size() - 1);
  Reverse(nums, 0, k - 1);
  Reverse(nums, k, nums.size() - 1);
}

void RotateSolutionImplC::Reverse(std::vector<int> &nums, std::size_t begin,
                                  std::size_t end) {
  while (begin < end) {
    std::swap(nums[begin++], nums[end--]);
  }
}

} // namespace leetcode