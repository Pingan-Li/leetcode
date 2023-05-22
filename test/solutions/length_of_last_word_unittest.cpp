/**
 * @file length_of_last_word_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/length_of_last_word.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {
TEST(length_of_last_word, case_0) {
  int size = LengthOfLastWord("fly me to the moonn      ");
  EXPECT_EQ(size, 5);
}
TEST(length_of_last_word, case_1) {
  int size = LengthOfLastWord("a");
  EXPECT_EQ(size, 1);
}
}  // namespace leetcode
