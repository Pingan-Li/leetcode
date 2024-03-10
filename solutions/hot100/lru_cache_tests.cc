/**
 * @file lru_cache_tests.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/hot100/lru_cache.h"
#include "testing/googletest/include/gtest/gtest.h"

class LRUCacheTests : public testing::Test {};

TEST_F(LRUCacheTests, Case0) {
  leetcode::LRUCache lru_cache(5);
  for (auto i = 0; i < 10; ++i) {
    lru_cache.put(i, i * 10);
  }

  for (auto i = 0; i < 10; ++i) {
    std::cout << lru_cache.get(i) << std::endl;
  }
}