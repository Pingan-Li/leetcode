/**
 * @file add_binary.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/add_binary.h"
#include <string>
namespace leetcode {
std::string AddBinary(std::string a, std::string b) {
  // solution 1: using stoi
  // solution 2:
  std::string result;
  int carry = 0;
  int sum = 0;
  for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; --i, --j) {
    sum = carry;
    sum += i >= 0 ? a[i] - '0' : 0;
    sum += j >= 0 ? b[j] - '0' : 0;
    result.push_back(sum % 2 + '0');
    carry = sum / 2;
  }
  result.append(carry == 1 ? "1" : "");
  return {result.crbegin(), result.crend()};
}
} // namespace leetcode