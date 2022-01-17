/**
 * @file convert_to_title_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "convert_to_title.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace leetcode {
TEST(convert_to_title, case_0) {
    std::string result = convertToTitle(1);
    std::string expect{"A"};
    EXPECT_EQ(result, expect);
}
TEST(convert_to_title, case_1) {
    std::string result = convertToTitle(26);
    std::string expect{"Z"};
    EXPECT_EQ(result, expect);
}
TEST(convert_to_title, case_2) {
    std::string result = convertToTitle(27);
    std::string expect{"AA"};
    EXPECT_EQ(result, expect);
}
TEST(convert_to_title, case_3) {
    std::string result = convertToTitle(2147483647);
    std::string expect{"FXSHRXW"};
    EXPECT_EQ(result, expect);
}
} // namespace leetcode
