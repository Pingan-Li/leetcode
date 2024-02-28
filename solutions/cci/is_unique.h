/**
 * @file is_unique.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_IS_UNIQUE_H_
#define SOLUTIONS_CCI_IS_UNIQUE_H_

#include <string>

namespace leetcode {
class Solution {
 public:
  virtual bool IsUniuqe(std::string const& astr) = 0;
};

class SolutionImpl : public Solution {
 public:
  bool IsUniuqe(const std::string& astr) override;
};
}  // namespace leetcode
#endif