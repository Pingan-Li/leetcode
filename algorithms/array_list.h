/**
 * @file array_list.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-25
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_BASE_ARRAY_LIST_H_
#define LEETCODE_BASE_ARRAY_LIST_H_

#include <cstddef>
#include <iostream>

#include "algorithms/list.h"
#include "base/exception.h"

namespace base {
template <typename T>
class ArrayList : public List<T> {
 public:
  ArrayList(std::size_t capacity_ = 8)
      : capacity_(8), size_(0), objz_(new T[capacity_]) {}

  ArrayList(ArrayList const& array_list)
      : capacity_(array_list.capacity_),
        size_(array_list.size_),
        objz_(new T[array_list.size_]) {
    std::size_t index{0};
    for (auto const& element : array_list) {
      objz_[index] = element;
      ++index;
    }
  }

  ArrayList& operator=(ArrayList const& array_list) {
    if (this != &array_list) {
      ArrayList<T> tmp(array_list);
      std::swap(tmp.capacity_, capacity_);
      std::swap(tmp.size_, size_);
      std::swap(tmp.objz_, objz_);
    }
    return *this;
  }

  ArrayList(ArrayList&& array_list) {
    std::swap(array_list.capacity_, capacity_);
    std::swap(array_list.size_, size_);
    std::swap(array_list.objz_, objz_);
    array_list.capacity_ = 0;
    array_list.size_ = 0;
    array_list.objz_ = nullptr;
  }

  ArrayList& operator=(ArrayList&& array_list) {
    std::swap(array_list.capacity_, capacity_);
    std::swap(array_list.size_, size_);
    std::swap(array_list.objz_, objz_);
    array_list.capacity_ = 0;
    array_list.size_ = 0;
    array_list.objz_ = nullptr;
    return *this;
  }

  virtual ~ArrayList() { delete[] objz_; }

  // List APIs.
  std::size_t Size() const override { return size_; }

  bool IsEmpty() const override { return 0 == size_; }

  T Get(std::size_t index) const override {
    if (!(index < size_)) {
      throw IndexOutOfRangeException(index, size_);
    }
    return objz_[index];
  }

  void Set(std::size_t index, T const& value) override {
    if (!(index < size_)) {
      throw IndexOutOfRangeException(index, size_);
    }
    objz_[index] = value;
  }

  T Remove(std::size_t index) override {
    if (!(index < size_)) {
      throw IndexOutOfRangeException(index, size_);
    }
    T target = objz_[index];
    for (std::size_t i = 0; i < size_ - 1; ++i) {
      objz_[i] = objz_[i + 1];
    }
    objz_[--size_].~T();
    return target;
  }

  void Insert(std::size_t index, T const& value) override {
    if (index > size_) {
      throw IndexOutOfRangeException(index, size_);
    }
    if (size_ == capacity_) {
      Expand();
    }
    for (std::size_t i = size_; i > index; --i) {
      objz_[i] = objz_[i - 1];
    }
    objz_[index] = value;
    ++size_;
  }

  void Append(T const& value) override {
    if (size_ == capacity_) {
      Expand();
    }
    objz_[++size_] = value;
  }

  T& operator[](std::size_t index) override { return objz_[0]; }

  T const& operator[](std::size_t index) const override { return objz_[0]; }

  // Own APIs

  T Head() const { return Get(0); }

  T Tail() const { return Get(size_ - 1); }

 private:
  void Expand() {
    std::size_t new_capacity = capacity_ << 1;
    T* new_objz = new T[new_capacity];
    for (std::size_t i = 0; i < size_; ++i) {
      new_objz[i] = objz_[i];
    }
    capacity_ = new_capacity;
    delete[] objz_;
    objz_ = new_objz;
  }

  void Shrink() {}

  std::size_t capacity_;
  std::size_t size_;
  T* objz_;
};
}  // namespace base

#endif