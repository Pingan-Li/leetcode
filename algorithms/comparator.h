/**
 * @file comparator.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-20
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_ALGORITHMS_COMPARATOR_H_
#define LEETCODE_ALGORITHMS_COMPARATOR_H_

namespace algorithms {
template <typename T>
class Comparator {
 public:
  virtual bool operator()(T const& lhs, T const& rhs) const = 0;
};

template <typename T>
class LessThan : public Comparator<T> {
 public:
  bool operator()(T const& lhs, T const& rhs) const override {
    return lhs < rhs;
  }
};

template <typename T>
class LessThanOrEqual : public Comparator<T> {
 public:
  bool operator()(T const& lhs, T const& rhs) const override {
    return lhs <= rhs;
  }
};

template <typename T>
class GreaterThan : public Comparator<T> {
 public:
  bool operator()(T const& lhs, T const& rhs) const override {
    return lhs > rhs;
  }
};

template <typename T>
class GreaterThanOrEqual : public Comparator<T> {
 public:
  bool operator()(T const& lhs, T const& rhs) const override {
    return lhs >= rhs;
  }
};

}  // namespace algorithms

#endif