/**
 * @file can_permute_palindrome.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-02
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_CAN_PERMUTE_PALINDROME_H_
#define SOLUTIONS_CCI_CAN_PERMUTE_PALINDROME_H_

#include <string>

namespace leetcode {
class Solution {
 public:
  virtual bool CanPermutePalindrome(std::string s) = 0;
};

class SolutionImpl : public Solution {
 public:
  bool CanPermutePalindrome(std::string s) override;
};
}  // namespace leetcode
#endif