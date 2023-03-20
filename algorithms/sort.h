/**
 * @file sort.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_ALGORITHMS_SORT_H_
#define LEETCODE_ALGORITHMS_SORT_H_

#include <vector>

#include "algorithms/comparator.h"

namespace algorithms {
template <typename T>
class Policy {};

template <typename T>
void BubbleSort(std::vector<T> &data, Comparator<T> const &comparator) {
  if (data.empty()) {
    return;
  }
  for (std::size_t i = 0; i < data.size() - 1; ++i) {
    for (std::size_t j = 0; j < data.size() - i - 1; ++j) {
      if (comparator(data[j + 1], data[j])) {
        std::swap(data[j], data[j + 1]);
      }
    }
  }
}

template <typename T>
void SelectionSort(std::vector<T> &data, Comparator<T> const &comparator) {
  if (data.empty()) {
    return;
  }
  for (std::size_t i = 0; i < data.size() - 1; ++i) {
    std::size_t min_idx = i;
    for (std::size_t j = i + 1; j < data.size(); ++j) {
      if (comparator(data[j], data[min_idx])) {
        min_idx = j;
      }
    }
    if (min_idx != i) {
      // T min_val = data[min_idx];
      // data[min_idx] = data[i];
      // data[i] = min_val;
      std::swap(data[min_idx], data[i]);
    }
  }
}

template <typename T>
void InsertionSort(std::vector<T> &data, Comparator<T> const &comparator) {
  if (data.empty()) {
    return;
  }
  for (std::size_t i = 0; i < data.size(); ++i) {
    for (std::size_t j = i; j > 0 && (comparator(data[j], data[j - 1])); --j) {
      // T tmp = data[j - 1];
      // data[j - 1] = data[j];
      // data[j] = tmp;
      std::swap(data[j], data[j - 1]);
    }
  }
}

}  // namespace algorithms
#endif