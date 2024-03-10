/**
 * @file words_frequency_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <memory>
#include <vector>

#include "solutions/cci/words_frequency.h"
#include "testing/googletest/include/gtest/gtest.h"

class WordsFrequencyTests : public testing::Test {};

TEST_F(WordsFrequencyTests, Case0) {
  std::vector<std::string> book{"123", "123", "456"};
  leetcode::WordsFrequency words_frequency(book);
  ASSERT_EQ(words_frequency.GetFrequency("123"), 2);
  ASSERT_EQ(words_frequency.GetFrequency("456"), 1);
  ASSERT_EQ(words_frequency.GetFrequency("789"), 0);
}