/**
 * @file str_str_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "str_str.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(str_str, case_0) {
  auto ret = leetcode::strStr("heck", "fs");
  std::cout << ret;
}