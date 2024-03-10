/**
 * @file top_k.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_TOP_K_H_
#define SOLUTIONS_TOP_K_H_
#include <vector>
namespace leetcode {
class MaxHeap {
 public:
  MaxHeap();

  void Push(int value);

  bool Pop();

  int Top() const;

  int Size() const;

  bool Empty() const;

 private:
  void Sink(int index);
  void Swin(int index);
  int size_;
  int capacity_;
  std::vector<int> heap_;
};
}  // namespace leetcode
#endif  // SOLUTIONS_TOP_K_H_
