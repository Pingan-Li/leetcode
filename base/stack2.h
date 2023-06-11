/**
 * @file stack2.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-05-26
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef BASE_STACK2_H_
#define BASE_STACK2_H_
#include <cstddef>
namespace base {
template <typename T>
class Stack2 {
 public:
  Stack2();

  Stack2(std::size_t capacity)
      : data_(static_cast<T*>(::operator new[](capacity * sizeof(T)))),
        capa_(capacity),
        size_(0) {}

  void Push(T const& t) { ::new (data_ + (size_++)) T(t); }

  void Pop(T& t) {
    t = data_[--size_];
    data_[size_].~T();
  }

  bool IsFull() const noexcept { return capa_ == size_; }

  bool IsEmpty() const noexcept { return 0 == size_; }

  virtual ~Stack2() {
    for (std::size_t i = 0; i < size_; ++i) {
      data_[i].~T();
    }
    ::operator delete[](data_);
  };

 private:
  T* data_;
  std::size_t capa_;
  std::size_t size_;
};
}  // namespace base
#endif