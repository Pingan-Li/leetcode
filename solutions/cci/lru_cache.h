/**
 * @file lru_cache.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-16
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_LRU_CACHE_H_
#define SOLUTIONS_CCI_LRU_CACHE_H_

#include <algorithm>
#include <list>
#include <utility>

namespace leetcode {

class LRUCache {
 public:
  LRUCache(int capacity) : cache_(), capacity_(capacity) {}

  int get(int key) {
    // TODO: std::find_if has an O(N) time comlexity. consider using a map to
    // optimize it.
    auto iter =
        std::find_if(cache_.begin(), cache_.end(),
                     [key](decltype(cache_)::value_type const& pair) -> bool {
                       return key == pair.first ? true : false;
                     });
    if (iter == cache_.end()) {
      return -1;
    }
    auto pair = *iter;
    cache_.erase(iter);
    cache_.emplace_front(pair);
    return cache_.front().second;
  }

  void put(int key, int value) {
    // TODO: std::find_if has an O(N) time comlexity. consider using a map to
    // optimize it.
    auto iter =
        std::find_if(cache_.begin(), cache_.end(),
                     [key](decltype(cache_)::value_type const& pair) -> bool {
                       return key == pair.first ? true : false;
                     });

    if (iter == cache_.end()) {
      if (capacity_ == cache_.size()) {
        cache_.pop_back();
      }
      cache_.emplace_front(key, value);
      return;
    } else {
      iter->second = value;
      auto pair = *iter;
      cache_.erase(iter);
      cache_.emplace_front(pair);
      return;
    }
  }

 private:
  std::list<std::pair<int, int>> cache_;
  int capacity_;
};
}  // namespace leetcode
#endif