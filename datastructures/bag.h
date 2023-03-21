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
#include <iostream>

#include "datastructures/dynamic_array.h"

namespace datastructures {

template <typename T>
class Bag final {
 public:
  Bag() = default;

  ~Bag() = default;

  void Add(T const& item) { dynamic_array_.Append(item); }

  bool IsEmpty() { return dynamic_array_.GetSize() == 0; }

  std::size_t Size() { return dynamic_array_.GetSize(); }

 private:
  DynamicArray<T> dynamic_array_;
};
}  // namespace datastructures

#endif