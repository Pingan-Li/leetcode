/**
 * @file min_stack.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-06
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_MIN_STACK_H_
#define SOLUTIONS_CCI_MIN_STACK_H_

#include <limits>
#include <stack>
namespace leetcode {

class MinStack {
 public:
  /** initialize your data structure here. */
  MinStack() : main_stack_(), min_stack_() {
    min_stack_.push(std::numeric_limits<int>::max());
  }

  void push(int x) {
    main_stack_.push(x);
    min_stack_.push(std::min(min_stack_.top(), x));
  }

  void pop() {
    main_stack_.pop();
    min_stack_.pop();
  }

  int top() { return main_stack_.top(); }

  int getMin() { return min_stack_.top(); }

 private:
  std::stack<int> main_stack_;
  std::stack<int> min_stack_;
};
}  // namespace leetcode

#endif