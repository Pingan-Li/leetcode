/**
 * @file climb_stairs_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/dp/climb_stairs.h"
#include "testing/googletest/include/gtest/gtest.h"

TEST(ClimbStairts, Level_1) {
  int result = leetcode::ClimbStairts(1);
  int answer = 1;
  ASSERT_EQ(result, answer);
}

TEST(ClimbStairts, Level_2) {
  int result = leetcode::ClimbStairts(2);
  int answer = 2;
  ASSERT_EQ(result, answer);
}

TEST(ClimbStairts, Level3) {
  int result = leetcode::ClimbStairts(3);
  int answer = 3;
  ASSERT_EQ(result, answer);
}