/**
 * @file top_k.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/top_k.h"

#include <utility>

namespace leetcode {
MaxHeap::MaxHeap() : size_(0), heap_(1) {}

void MaxHeap::Push(int value) {
  heap_.push_back(value);
  ++size_;
  Swin(size_);
}

bool MaxHeap::Pop() {
  if (size_ == 0) return false;
  std::swap(heap_[1], heap_[size_--]);
  heap_[size_ + 1] = 0;
  Sink(1);
  return true;
}

int MaxHeap::Top() const {
  if (size_ == 0)
    return -1;
  else
    return heap_[1];
}

int MaxHeap::Size() const { return size_; }

bool MaxHeap::Empty() const { return size_ == 0; }

void MaxHeap::Sink(int index) {
  while (index * 2 < size_) {
    int bigger_index = 2 * index;
    if (bigger_index < size_ && heap_[bigger_index] < heap_[bigger_index + 1]) {
      // the right child is bigger than left, so  bigger_index = 2 * k + 1
      bigger_index += 1;
    }
    if (heap_[index] >= heap_[bigger_index]) break;
    std::swap(heap_[index], heap_[bigger_index]);
    index = bigger_index;
  }
}

void MaxHeap::Swin(int index) {
  while (index > 1 && heap_[index / 2] < heap_[index]) {
    std::swap(heap_[index / 2], heap_[index]);
    index = index / 2;
  }
}
}  // namespace leetcode