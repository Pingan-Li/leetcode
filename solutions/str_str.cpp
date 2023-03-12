/**
 * @file str_str.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/str_str.h"

namespace leetcode {

int StrStr(const std::string &heckStack, const std::string &needle) {
  if (needle.empty()) {
    return 0;
  } else {
    size_t pos = heckStack.find(needle);
    if (pos == std::string::npos) {
      return -1;
    } else {
      return pos;
    }
  }
}

}  // namespace leetcode
