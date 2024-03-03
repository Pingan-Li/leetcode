/**
 * @file compress_string.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_COMPRESS_STRING_H_
#define SOLUTIONS_CCI_COMPRESS_STRING_H_

#include <string>

namespace leetcode {
class Solution {
 public:
  virtual std::string CompressString(std::string string) = 0;
};

class SolutionImpl : public Solution {
 public:
  std::string CompressString(std::string string) override;
};
}  // namespace leetcode
#endif