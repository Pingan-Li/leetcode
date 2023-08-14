/**
 * @file longest_palindrome.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-04-02
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "solutions/longest_palindrome.h"

#include <gtest/gtest.h>

namespace solutions {
TEST(LongestPalindrome, case0) {
  std::string str{"asfsfasabcbaa"};
  std::cout << LongestPalindrome(str);
}

// TEST(LongestPalindrome, case1) {
//   std::string str{"aaaaaaaaaaaaaaaaaaaababadkkkkk"};
//   std::cout << LongestPalindrome(str);
// }

// TEST(LongestPalindrome, case2) {
//   std::string str{"cbbd"};
//   auto iter = str.end();
//   while (iter-- != str.begin()) {
//     std::cout << *iter;
//   }
// }
}  // namespace solutions