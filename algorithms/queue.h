/**
 * @file queue.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_ALGORITHMS_QUEUE_H_
#define LEETCODE_ALGORITHMS_QUEUE_H_

#include <cstddef>

#include "algorithms/dynamic_array.h"

namespace algorithms {
template <typename T>
class Queue {
 public:
  void Enqueue(T const& value) { dynamic_array_.PushBack(value); }

  T Dequeue() {
    T last = dynamic_array_.Tail();
    dynamic_array_.Remove();
    return last;
  }

  bool IsEmpty() { return dynamic_array_.GetSize() == 0; };

  std::size_t Size() { return dynamic_array_.GetSize(); }

 private:
  DynamicArray<T> dynamic_array_;
};
}  // namespace algorithms

#endif