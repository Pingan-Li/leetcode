/**
 * @file multi_thread_1114.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-08-25
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <functional>
#include <semaphore>

#ifndef LEETCODE_MULTITHREAD_1114_H_
#define LEETCODE_MULTITHREAD_1114_H_

namespace leetcode {
class Foo {
public:
  Foo() : semaphore1_(0), semaphore2_(0) {}

  void first(std::function<void()> printFirst) {
    // printFirst() outputs "first". Do not change or remove this line.
    printFirst();
    semaphore1_.release();
  }

  void second(std::function<void()> printSecond) {
    semaphore1_.acquire();
    // printSecond() outputs "second". Do not change or remove this line.
    printSecond();
    semaphore2_.release();
  }

  void third(std::function<void()> printThird) {
    semaphore2_.acquire();
    // printThird() outputs "third". Do not change or remove this line.
    printThird();
  }

private:
  std::binary_semaphore semaphore1_;
  std::binary_semaphore semaphore2_;
};
} // namespace leetcode
#endif