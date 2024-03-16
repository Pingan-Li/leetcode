/**
 * @file animal_shelf.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-16
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_ANIMAL_SHELF_H_
#define SOLUTIONS_CCI_ANIMAL_SHELF_H_

#include <list>
#include <vector>

namespace leetcode {
class AnimalShelf {
 public:
  AnimalShelf() : queue_() {}

  void enqueue(std::vector<int> animal) {
    queue_.emplace_back(std::vector<int>{animal[0], animal[1]});
  }

  std::vector<int> dequeueAny() {
    if (queue_.empty()) {
      return {-1, -1};
    }
    auto result = queue_.front();
    queue_.pop_front();
    return result;
  }

  std::vector<int> dequeueDog() {
    for (auto iter = queue_.begin(); iter != queue_.end(); ++iter) {
      if (iter->operator[](1) == 1) {
        auto result = *iter;
        queue_.erase(iter);
        return result;
      }
    }
    return {-1, -1};
  }

  std::vector<int> dequeueCat() {
    for (auto iter = queue_.begin(); iter != queue_.end(); ++iter) {
      if (iter->operator[](0) == 0) {
        auto result = *iter;
        queue_.erase(iter);
        return result;
      }
    }
    return {-1, -1};
  }

 private:
  std::list<std::vector<int>> queue_;
};
}  // namespace leetcode
#endif