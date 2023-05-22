/**
 * @file stack.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-05-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef BASE_STACK_H_
#define BASE_STACK_H_
#include <cstddef>
namespace base {
// T must meet copy construtible.
template <typename T>
class Stack {
 public:
  explicit Stack(std::size_t stack_capacity)
      : data_(new T[stack_capacity]), capa_(stack_capacity), size_(0) {}

  virtual ~Stack() { delete[] data_; }

  void Push(T const& t) {
    if (IsFull()) {
      Expand();
    }
    data_[size_++] = t;
  }

  T Pop() {
    T temp = data_[size_ - 1];
    data_[--size_].~T();
    return temp;
  }

  bool IsEmpty() const noexcept { return size_ == 0; }

  bool IsFull() const noexcept { return size_ == capa_; }

  std::size_t Size() const noexcept { return size_; }

 private:
  void Expand() {}

  void Shrink() {}

  T* data_;
  std::size_t capa_;
  std::size_t size_;
};
}  // namespace base
#endif