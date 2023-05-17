/**
 * @file priority_queue.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-26
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_ALGORITHMS_PRIORITY_QUEUE_H_
#define LEETCODE_ALGORITHMS_PRIORITY_QUEUE_H_

#include <cstddef>
namespace base {
template <typename T>
class PriorityQueue {
 public:
  void Insert(T const& value) {}

  T GetMax();

  T RemoveMax();

  std::size_t Size();

  bool IsEmpty();

 private:
};
}  // namespace base
#endif