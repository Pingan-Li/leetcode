/**
 * @file detect_capital_use.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/detect_capital_use.h"

namespace leetcode {

bool DetectCapitalUse(std::string word) {
  if (word.size() >= 2 && std::islower(word[0]) && std::isupper(word[1])) {
    return false;
  }
  for (int i = 2; i < word.size(); ++i) {
    if (std::islower(word[i]) ^ std::islower(word[1])) {
      return false;
    }
  }
  return true;
}

}  // namespace leetcode
