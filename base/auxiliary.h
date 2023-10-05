/**
 * @file auxiliary.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef BASE_AUXILIARY_H_
#define BASE_AUXILIARY_H_
#include <iostream>
namespace base {
template <typename Begin, typename End> void Print(Begin begin, End end) {
  std::cout << "[ ";
  while (begin != end) {
    std::cout << *begin << " ";
    ++begin;
  }
  std::cout << "]\n";
}
}; // namespace base

#endif