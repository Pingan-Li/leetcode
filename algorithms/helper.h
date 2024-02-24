/**
 * @file vector_helper.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef LEETCODE_ALGORITHMS_VECTOR_HELPER_H_
#define LEETCODE_ALGORITHMS_VECTOR_HELPER_H_
#include <iostream>
#include <vector>
namespace algorithms {

void __attribute__((visibility("default")))
SpawnRandomVector(std::vector<int>& data, std::size_t nelem);

template <typename T>
void Print(std::vector<T> const& data) {
  std::cout << "[";
  for (auto i = data.begin(); i != data.end(); ++i) {
    std::cout << *i;
    if (i != data.end() - 1) {
      std::cout << ", ";
    }
  }

  std::cout << "]" << std::endl;
}
}  // namespace algorithms
#endif