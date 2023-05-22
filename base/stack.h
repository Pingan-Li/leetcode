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
  /**
   * @brief Construct a new Stack object
   *
   * @param stack_capacity The capacity of stack.
   */
  explicit Stack(std::size_t stack_capacity)
      : data_(new T[stack_capacity]), capa_(stack_capacity), size_(0) {}

  virtual ~Stack() { delete[] data_; }

  bool Push(T const& t) {
    if (IsFull()) {
      return false;
    }
    data_[size_++] = t;
    return true;
  }

  bool Pop(T& out) {
    if (IsEmpty()) {
      return false;
    }
    out = data_[--size_];
    return true;
  }

  bool IsEmpty() const noexcept { return size_ == 0; }

  bool IsFull() const noexcept { return size_ == capa_; }

  std::size_t Size() const noexcept { return size_; }

 private:
  // TODO
  void Expand() {}
  // TODO
  void Shrink() {}

  T* data_;
  std::size_t capa_;
  std::size_t size_;
};
}  // namespace base
#endif