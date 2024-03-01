/**
 * @file replace_spaces.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-01
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_REPLACE_SPACES_H_
#define SOLUTIONS_CCI_REPLACE_SPACES_H_

#include <string>

namespace leetcode {
class Solution {
 public:
  virtual std::string ReplaceSpaces(std::string S, int length) = 0;
};

class SolutionImpl : public Solution {
 public:
  std::string ReplaceSpaces(std::string S, int length) override;
};

}  // namespace leetcode
#endif  // SOLUTIONS_CCI_REPLACE_SPACES_H_