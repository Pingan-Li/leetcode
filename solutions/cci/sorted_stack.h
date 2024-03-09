/**
 * @file sorted_stack.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_SORTED_H_H
#define SOLUTIONS_CCI_SORTED_H_H
#include <stack>
namespace leetcode {
class SortedStack {
 public:
  SortedStack() {}

  void push(int val) {
    while (!prime_stack_.empty() && prime_stack_.top() < val) {
      aux_stack_.push(prime_stack_.top());
      prime_stack_.pop();
    }

    prime_stack_.push(val);

    while (!aux_stack_.empty()) {
      prime_stack_.push(aux_stack_.top());
      aux_stack_.pop();
    }
  }

  void pop() {
    if (!prime_stack_.empty()) prime_stack_.pop();
  }

  int peek() { return prime_stack_.empty() ? -1 : prime_stack_.top(); }

  bool isEmpty() { return prime_stack_.empty(); }

 private:
  std::stack<int> prime_stack_;
  std::stack<int> aux_stack_;
};
}  // namespace leetcode
#endif  // SOLUTIONS_CCI_SORTED_H_H