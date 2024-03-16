/**
 * @file animal_shelf_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-16
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/animal_shelf.h"
#include "testing/googletest/include/gtest/gtest.h"

class AnimalShelfTests : public testing::Test {
 public:
};

TEST_F(AnimalShelfTests, Case0) {
  leetcode::AnimalShelf animal_shelf;
  animal_shelf.enqueue({0, 0});
  auto result = animal_shelf.dequeueAny();
  ASSERT_EQ(result[0], 0);
  ASSERT_EQ(result[1], 0);
}