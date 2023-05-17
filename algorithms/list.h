/**
 * @file list.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-22
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_BASE_LIST_H_
#define LEETCODE_BASE_LIST_H_

#include <cstddef>

namespace base {
template <typename T>
/**
 * @brief Abstract data structure, the APIs is index-based.I
 *
 */
class List {
 public:
  template <typename Iter>
  class Iterator;

  template <typename Iter>
  class ConstIterator;

  template <typename Iter>
  class ReverseIterator;

  template <typename Iter>
  class ConstReverseIterator;

  virtual ~List() = default;

  virtual std::size_t Size() const = 0;

  virtual bool IsEmpty() const = 0;

  virtual T Get(std::size_t index) const = 0;

  virtual void Set(std::size_t index, T const& value) = 0;

  virtual T Remove(std::size_t index) = 0;

  virtual void Insert(std::size_t index, T const& value) = 0;

  virtual void Append(T const& value) = 0;

  virtual T& operator[](std::size_t index) = 0;

  virtual T const& operator[](std::size_t index) const = 0;
};

}  // namespace base

#endif