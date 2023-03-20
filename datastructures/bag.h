/**
 * @file bag.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-20
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_DATASTRUCTURES_BAG_H
#define LEETCODE_DATASTRUCTURES_BAG_H

#include <cstddef>
#include <cstring>

namespace datastructures {

template <typename T>
class Bag final {
 public:
  Bag() : capacity_(4), items_(new T[4]), size_(0) {}

  ~Bag() { delete[] items_; }

  void Add(T const& item) {
    if (IsFull()) {
      Expand();
    }
    items_[size_++] = item;
  }

  bool IsEmpty() { return size_ == 0; }

  std::size_t Size() { return size_; }

 private:
  bool IsFull() { return size_ == capacity_; }

  void Expand() {
    T* old_items = items_;
    std::size_t old_capacity = capacity_;
    capacity_ <<= 1;
    items_ = new T[capacity_];
    memcpy(items_, old_items, old_capacity * sizeof(T));
    delete[] old_items;
  }

  std::size_t capacity_;
  T* items_;
  std::size_t size_;
};
}  // namespace datastructures

#endif