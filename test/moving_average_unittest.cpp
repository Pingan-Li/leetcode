/**
 * @file moving_average_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "moving_average.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <queue>

TEST(moving_average, case_0) {
  leetcode::MovingAverage m{3};
  std::cout << m.next(1) << std::endl;
  std::cout << m.next(2) << std::endl;
  std::cout << m.next(3) << std::endl;
  std::cout << m.next(6) << std::endl;
  std::cout << m.next(5) << std::endl;
  std::cout << m.next(6) << std::endl;
  std::cout << m.next(5) << std::endl;
  std::cout << m.next(6) << std::endl;
  
}