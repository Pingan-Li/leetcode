/**
 * @file title_to_number_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "title_to_number.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
namespace leetcode {
TEST(title_to_number, case_0) { std::cout << titleToNumber("Z"); }

TEST(title_to_number, case_1) { std::cout << titleToNumber("FXSHRXW"); }
} // namespace leetcode
