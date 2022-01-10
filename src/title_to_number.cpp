/**
 * @file title_to_number.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "title_to_number.h"
#include "string"
namespace leetcode {
int titleToNumber(std::string columnTitle) {
  int ret{0};
  long long base{1};
  int curr{0};
  for (auto iter = columnTitle.crbegin(); iter != columnTitle.crend(); ++iter) {
    curr = (*iter) - 64;
    ret += curr * base;
    base *= 26;
  }
  return ret;
}
} // namespace leetcode
