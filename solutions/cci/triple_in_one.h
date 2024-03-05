/**
 * @file triple_in_one.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-06
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_TRIPLE_IN_ONE_H_
#define SOLUTIONS_CCI_TRIPLE_IN_ONE_H_

#include <cstring>
#include <iomanip>
#include <iostream>

namespace leetcode {
class TripleInOne {
 public:
  TripleInOne(int stackSize) : stack_size_(stackSize) {
    auto total_size = 3 * (stack_size_ + 1);
    stack_data_ = new int[total_size];
    std::memset(stack_data_, 0, sizeof(int) * total_size);
  }

  virtual ~TripleInOne();

  void push(int stackNum, int value) {
    if (stack_depth(stackNum) < stack_size_) {
      stack_data_[stack_depth(stackNum) + stackNum * (stack_size_ + 1)] = value;
      ++stack_depth(stackNum);
    }
  }

  int pop(int stackNum) {
    int result = -1;
    if (!isEmpty(stackNum)) {
      result =
          stack_data_[stackNum * (stack_size_ + 1) + stack_depth(stackNum) - 1];
      --stack_depth(stackNum);
    }
    return result;
  }

  int peek(int stackNum) {
    if (isEmpty(stackNum)) return -1;
    return stack_data_[stackNum * (stack_size_ + 1) + stack_depth(stackNum) -
                       1];
  }

  bool isEmpty(int stackNum) { return stack_depth(stackNum) == 0; }

  void PrintElements() {
    for (auto i = 0; i < 3 * (stack_size_ + 1); ++i) {
      std::cout << std::left << stack_data_[i] << " ";
    }
    std::cout << std::endl;
  }

 private:
  int& stack_depth(int stack_num) {
    return stack_data_[stack_size_ * stack_num + stack_size_ + stack_num];
  }
  int const stack_size_;
  int* stack_data_ = nullptr;
};
}  // namespace leetcode

#endif