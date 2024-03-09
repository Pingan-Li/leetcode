/**
 * @file my_queue.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_MY_QUEUE_H_
#define SOLUTIONS_CCI_MY_QUEUE_H_
#include <stack>
namespace leetcode {
class MyQueue {
 public:
  /** Initialize your data structure here. */
  MyQueue() : prime_stack_(), aux_stack_() {}

  /** Push element x to the back of queue. */
  void push(int x) { prime_stack_.push(x); }

  /** Removes the element from in front of queue and returns that element. */
  int pop() {
    while (!prime_stack_.empty()) {
      aux_stack_.push(prime_stack_.top());
      prime_stack_.pop();
    }

    auto result = aux_stack_.top();
    aux_stack_.pop();

    while (!aux_stack_.empty()) {
      prime_stack_.push(aux_stack_.top());
      aux_stack_.pop();
    }
    return result;
  }

  /** Get the front element. */
  int peek() {
    while (!prime_stack_.empty()) {
      aux_stack_.push(prime_stack_.top());
      prime_stack_.pop();
    }

    auto result = aux_stack_.top();

    while (!aux_stack_.empty()) {
      prime_stack_.push(aux_stack_.top());
      aux_stack_.pop();
    }
    return result;
  }

  /** Returns whether the queue is empty. */
  bool empty() { return prime_stack_.empty(); }

 private:
  std::stack<int> prime_stack_;
  std::stack<int> aux_stack_;
};
}  // namespace leetcode
#endif  // SOLUTIONS_CCI_MY_QUEUE_H_