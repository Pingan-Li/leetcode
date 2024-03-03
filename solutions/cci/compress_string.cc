/**
 * @file compress_string.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/compress_string.h"

#include <sstream>

namespace leetcode {
std::string SolutionImpl::CompressString(std::string s) {
  if (s.empty()) return {};

  std::stringstream stringstream;

  char c = s.front();
  int cnt = 1;

  for (auto i = 1ull; i < s.size(); ++i) {
    if (s[i] != c) {
      stringstream << c;
      stringstream << cnt;
      c = s[i];
      cnt = 1;
    } else {
      cnt++;
    }
  }
  stringstream << c;
  stringstream << cnt;
  std::string compressed = stringstream.str();

  return compressed.size() < s.size() ? compressed : s;
}
}  // namespace leetcode