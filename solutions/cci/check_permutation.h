/**
 * @file check_permutation.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_CHECK_PERMUTATION_H_
#define SOLUTIONS_CCI_CHECK_PERMUTATION_H_

#include <string>

namespace leetcode {
class Solution {
 public:
  virtual bool CheckPermutation(std::string const& s1,
                                std::string const& s2) = 0;
};

class SolutionImpl : public Solution {
 public:
  bool CheckPermutation(std::string const& s1, std::string const& s2) override;
};
}  // namespace leetcode
#endif