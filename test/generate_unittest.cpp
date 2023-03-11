/**
 * @file generate_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "solutions/generate.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace leetcode {

TEST(generate, case_0) {
  std::vector<std::vector<int>> result = generate(25);
  for (auto &vec : result) {
    for (auto &i : vec) {
      std::cout << i << " ";
    }
    std::cout << '\n';
  }
}

}  // namespace leetcode
