/**
 * @file set_of_stacks.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_SET_OF_STACKS_H_
#define SOLUTIONS_CCI_SET_OF_STACKS_H_

#include <stack>
#include <vector>

namespace leetcode {
class StackOfPlates {
 public:
  StackOfPlates(int cap) { capacity_ = cap; }

  void push(int val) {
    if (capacity_ == 0) {
      return;
    }
    if (stacks_.empty() || stacks_.back().size() == capacity_) {
      stacks_.emplace_back(std::stack<int>());
    }
    stacks_.back().push(val);
  }

  int pop() {
    if (capacity_ == 0 || stacks_.empty()) {
      return -1;
    }
    auto result = stacks_.back().top();
    stacks_.back().pop();
    if (stacks_.back().empty()) {
      stacks_.pop_back();
    }
    return result;
  }

  int popAt(int index) {
    if (capacity_ == 0 || index >= stacks_.size() || stacks_[index].empty()) {
      return -1;
    }
    int res = stacks_[index].top();
    stacks_[index].pop();
    if (stacks_[index].empty()) {
      stacks_.erase(stacks_.begin() + index);
    }
    return res;
  }

 private:
  std::vector<std::stack<int>> stacks_;
  int capacity_;
};

}  // namespace leetcode
#endif  // SOLUTIONS_CCI_SET_OF_STACKS_H_