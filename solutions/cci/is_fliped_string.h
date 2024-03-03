/**
 * @file is_fliped_string.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_IS_FLIPED_STRING_H_
#define SOLUTIONS_CCI_IS_FLIPED_STRING_H_

#include <string>

namespace leetcode {
class Solution {
 public:
  virtual bool IsFlipedString(std::string s1, std::string s2) = 0;
};

class SolutionImpl : public Solution {
 public:
  bool IsFlipedString(std::string s1, std::string s2) override;
};
}  // namespace leetcode
#endif