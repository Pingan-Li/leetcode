/**
 * @file convert_to_title.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/convert_to_title.h"

namespace leetcode {
std::string convertToTitle(int number) {
  std::string temp;
  char k;
  while (number > 0) {
    k = (number - 1) % 26 + 1;
    temp.push_back(k - 1 + 'A');
    number = (number - k) / 26;
  }
  return {temp.rbegin(), temp.rend()};
}
}  // namespace leetcode
