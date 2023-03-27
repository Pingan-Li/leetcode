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

#include <algorithm>
#include <cstddef>
#include <vector>

#include "algorithms/comparator.h"

namespace algorithms {

struct DescendingTag {};

struct AscendingTag {};

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

template <typename Container>
void BubbleSort(Container &container, AscendingTag = {}) {
  if (container.empty()) {
    return;
  }
  std::ptrdiff_t diff = 0;
  for (auto i = container.begin(); i != container.end() - 1; ++i) {
    for (auto j = container.begin(); j != container.end() - diff - 1; ++j) {
      if (*(j + 1) < *j) {
        std::iter_swap(j, j + 1);
      }
    }
    ++diff;
  }
}

template <typename Container>
void BubbleSort(Container &container, DescendingTag) {
  if (container.empty()) {
    return;
  }
  std::ptrdiff_t diff = 0;
  for (auto i = container.begin(); i != container.end() - 1; ++i) {
    for (auto j = container.begin(); j != container.end() - diff - 1; ++j) {
      if (*(j + 1) > *j) {
        std::iter_swap(j, j + 1);
      }
    }
    ++diff;
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
      std::swap(data[min_idx], data[i]);
    }
  }
}

template <typename Container>
void SelectionSort(Container &container, AscendingTag = {}) {
  if (container.empty()) {
    return;
  }
  for (auto i = container.begin(); i != container.end() - 1; ++i) {
    auto min = i;
    for (auto j = i + 1; j != container.end(); ++j) {
      if (*j < *min) {
        min = j;
      }
    }
    if (min != i) {
      std::iter_swap(i, min);
    }
  }
}

template <typename Container>
void SelectionSort(Container &container, DescendingTag) {
  if (container.empty()) {
    return;
  }
  for (auto i = container.begin(); i != container.end() - 1; ++i) {
    auto max = i;
    for (auto j = i + 1; j != container.end(); ++j) {
      if (*j > *max) {
        max = j;
      }
    }
    if (max != i) {
      std::iter_swap(i, max);
    }
  }
}

template <typename Container>
void InsertionSort(
    Container &container,
    Comparator<typename Container::value_type> const &comparator) {
  if (container.empty()) {
    return;
  }
  for (std::size_t i = 0; i < container.size(); ++i) {
    for (std::size_t j = i; j > 0 && comparator(container[j], container[j - 1]);
         --j) {
      std::swap(container[j], container[j - 1]);
    }
  }
}

template <typename Container>
void InsertionSort(Container &container, AscendingTag = {}) {
  if (container.empty()) {
    return;
  }
  for (auto i = container.begin(); i != container.end(); ++i) {
    for (auto j = i; j != container.begin() && *j < *(j - 1); --j) {
      std::iter_swap(j, j - 1);
    }
  }
}

template <typename Container>
void InsertionSort(Container &container, DescendingTag) {
  if (container.empty()) {
    return;
  }
  for (auto i = container.begin(); i != container.end(); ++i) {
    for (auto j = i; j != container.begin() && *j > *(j - 1); --j) {
      std::iter_swap(j, j - 1);
    }
  }
}

template <typename T>
void ShellSort(std::vector<T> &data, Comparator<T> const &comparator) {
  if (data.empty()) {
    return;
  }
  std::size_t gap = 1;
  std::size_t length = data.size();
  while (gap < length / 3) {
    gap = 3 * gap + 1;
  }
  while (gap >= 1) {
    for (std::size_t i = gap; i < length; ++i) {
      for (std::size_t j = i; j >= gap && comparator(data[j], data[j - gap]);
           j -= gap)
        std::swap(data[j], data[j - gap]);
    }
    gap = gap / 3;
  }
}

template <typename Iterator>
Iterator Partition(Iterator first, Iterator last, AscendingTag = {}) {
  Iterator left = first;
  Iterator right = last + 1;
  Iterator pivot = first;
  while (true) {
    while (*++left < *pivot) {
      if (left == last) break;
    }
    while (*--right > *pivot) {
      if (right == first) break;
    }
    if (left >= right) break;
    std::iter_swap(left, right);
  }
  std::iter_swap(first, right);
  return right;
}

template <typename Iterator>
void QuickSort(Iterator first, Iterator last, AscendingTag = {}) {
  if (first >= last) return;
  Iterator right = Partition(first, last);
  QuickSort(first, right - 1);
  QuickSort(right + 1, last);
}

template <typename Container>
void QuickSort(Container &container, AscendingTag = {}) {
  QuickSort(container.begin(), container.end() - 1);
}

template <typename Iterator>
Iterator Partition(Iterator first, Iterator last, DescendingTag) {
  Iterator left = first;
  Iterator right = last + 1;
  Iterator pivot = first;
  while (true) {
    while (*++left > *pivot) {
      if (left == last) break;
    }
    while (*--right < *pivot) {
      if (right == first) break;
    }
    if (left >= right) break;
    std::iter_swap(left, right);
  }
  std::iter_swap(first, right);
  return right;
}

template <typename Iterator>
void QuickSort(Iterator first, Iterator last, DescendingTag tag) {
  if (first >= last) return;
  Iterator right = Partition(first, last, tag);
  QuickSort(first, right - 1, tag);
  QuickSort(right + 1, last, tag);
}

template <typename Container>
void QuickSort(Container &container, DescendingTag tag) {
  QuickSort(container.begin(), container.end() - 1, tag);
}

}  // namespace algorithms
#endif