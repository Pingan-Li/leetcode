/**
 * @file bag_unittest.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-20
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "algorithms/bag.h"

#include <gtest/gtest.h>

namespace algorithms {
TEST(Bag, case0) {
  Bag<int> bag;
  ASSERT_EQ(bag.Size(), 0);
  ASSERT_TRUE(bag.IsEmpty());
}

TEST(bag, case1) {
  Bag<int> bag;
  bag.Add(0);
  ASSERT_EQ(bag.Size(), 1);
  ASSERT_FALSE(bag.IsEmpty());
}

TEST(bag, case2) {
  Bag<int> bag;
  bag.Add(0);
  bag.Add(1);
  ASSERT_EQ(bag.Size(), 2);
  ASSERT_FALSE(bag.IsEmpty());
}

TEST(bag, case3) {
  Bag<int> bag;
  for (int i = 0; i < 100; ++i) {
    bag.Add(i);
  }
  ASSERT_EQ(bag.Size(), 100);
  ASSERT_FALSE(bag.IsEmpty());
}

}  // namespace algorithms