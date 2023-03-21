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
namespace datastructures {
template <typename T>
class Queue {
 public:
  void Enqueue(T const& v) {}

  T Dequeue() {}

  bool IsEmpty(){};

  std::size_t Size() {}

 private:
  T* items_;
  std::size_t size_;
  std::size_t capacity_;
};
}  // namespace datastructures

#endif