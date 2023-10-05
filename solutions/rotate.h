/**
 * @file rotate.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_SOLUTIONS_ROTATE_H_
#define LEETCODE_SOLUTIONS_ROTATE_H_

#include "base/auxiliary.h"
#include <cstddef>
#include <vector>

namespace leetcode {
//
class RotateSolution {
public:
  virtual void Rotate(std::vector<int> &nums, int k) = 0;
};

// Using auxiliary vector.
class RotateSolutionImplA : public RotateSolution {
public:
  void Rotate(std::vector<int> &nums, int k) override;
};

// Using GCD
class RotateSolutionImplB : public RotateSolution {
public:
  void Rotate(std::vector<int> &nums, int k) override;
};

// Using Reversing.
class RotateSolutionImplC : public RotateSolution {
public:
  void Rotate(std::vector<int> &nums, int k) override;

  void Reverse(std::vector<int> &nums, std::size_t begin, std::size_t end);
};

} // namespace leetcode
#endif