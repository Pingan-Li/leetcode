/**
 * @file one_edit_away.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_ONE_EDIT_AWAY_H_
#define SOLUTIONS_CCI_ONE_EDIT_AWAY_H_

#include <string>

namespace leetcode {
class Solution {
 public:
  virtual bool OneEditAway(std::string first, std::string second) = 0;
};

class SolutionImpl : public Solution {
 public:
  bool OneEditAway(std::string first, std::string second) override;
};
}  // namespace leetcode
#endif