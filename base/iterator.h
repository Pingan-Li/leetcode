/**
 * @file iterator.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-25
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_BASE_ITERATOR_H_
#define LEETCODE_BASE_ITERATOR_H_

#include <cstddef>
#include <utility>

namespace base {

// template <typename T>
// class Iterator {};

// template <typename T>
// class InputIterator : public Iterator<T> {};

// template <typename T>
// class OutputInterator : public Iterator<T> {};

// template <typename T>
// class ForwardIterator : public Iterator<T> {};

// template <typename T>
// class BidirectionIterator : public Iterator<T> {};

// template <typename T>
// class RandomAccessIterator : public BidirectionIterator<T> {};

template <typename S>
class Iterator {
 public:
  Iterator(S* address) noexcept : address_(address) {}

  Iterator(Iterator const& iterator) noexcept : address_(iterator.address_){};

  Iterator& operator=(Iterator const& iterator) {
    if (this != &iterator) {
      Iterator tmp = iterator;
      std::swap(tmp.address_, address_);
    }
  };
  /**
   * @brief suffix ++.
   *
   * @return Iterator
   */
  Iterator operator++(int) {
    Iterator ret = *this;
    ++(*this);
    return ret;
  };

  /**
   * @brief prefix ++.
   *
   * @return Iterator&
   */
  Iterator& operator++() {
    ++address_;
    return *this;
  };

  bool operator==(Iterator const& iterator) {
    return address_ == iterator.address_;
  }

  bool operator!=(Iterator const& iterator) {
    return address_ != iterator.address_;
  }

  bool operator>(Iterator const& iterator) {
    return address_ > iterator.address_;
  }

  bool operator>=(Iterator const& iterator) {
    return address_ >= iterator.address_;
  }

  bool operator<(Iterator const& iterator) {
    return address_ < iterator.address_;
  }

  bool operator<=(Iterator const& iterator) {
    return address_ <= iterator.address_;
  }

  S& operator*() { return *address_; }

  S* operator&() { return address_; }

  S* operator->() { return address_; }

 private:
  S* address_;
};

template <typename S>
class ConstIterator {
 public:
  ConstIterator(S* address) noexcept : address_(address) {}

  ConstIterator(ConstIterator const& iterator) noexcept
      : address_(iterator.address_){};

  ConstIterator& operator=(ConstIterator const& iterator) {
    if (this != &iterator) {
      ConstIterator tmp = iterator;
      std::swap(tmp.address_, address_);
    }
  };
  /**
   * @brief suffix ++.
   *
   * @return Iterator
   */
  ConstIterator operator++(int) {
    ConstIterator ret = *this;
    ++(*this);
    return ret;
  };

  /**
   * @brief prefix ++.
   *
   * @return Iterator&
   */
  ConstIterator& operator++() {
    ++address_;
    return *this;
  };

  bool operator==(ConstIterator const& iterator) {
    return address_ == iterator.address_;
  }

  bool operator!=(ConstIterator const& iterator) {
    return address_ != iterator.address_;
  }

  bool operator>(ConstIterator const& iterator) {
    return address_ > iterator.address_;
  }

  bool operator>=(ConstIterator const& iterator) {
    return address_ >= iterator.address_;
  }

  bool operator<(ConstIterator const& iterator) {
    return address_ < iterator.address_;
  }

  bool operator<=(ConstIterator const& iterator) {
    return address_ <= iterator.address_;
  }

  S const& operator*() { return *address_; }

  S const* operator&() { return address_; }

  S const* operator->() { return address_; }

 private:
  S* address_;
};

}  // namespace base
#endif