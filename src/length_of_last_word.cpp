/**
 * @file length_of_last_word.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "length_of_last_word.h"
namespace leetcode {
int lengthOfLastWord(std::string s) {
  int len{0};
  auto iter = s.rbegin();
  while (std::isspace(*iter) && iter != s.rend()) {
    iter++;
  }

  while (!std::isspace(*iter) && iter != s.rend()) {
    ++iter;
    ++len;
  }
  return len;
}
} // namespace leetcode
