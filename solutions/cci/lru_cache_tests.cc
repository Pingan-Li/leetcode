/**
 * @file lru_cache_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-16
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/cci/lru_cache.h"
#include "testing/googletest/include/gtest/gtest.h"

class LRUCacheTests : public testing::Test {};

TEST_F(LRUCacheTests, Case0) {
  leetcode::LRUCache cahce(2);
  cahce.put(1, 1);
  cahce.put(2, 2);

  ASSERT_EQ(cahce.get(1), 1);
  cahce.put(3, 3);
  ASSERT_EQ(cahce.get(2), -1);
}