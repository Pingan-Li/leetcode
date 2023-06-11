/**
 * @file linked_list.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-06-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef BASE_LINKED_LIST_H_
#define BASE_LINKED_LIST_H_

#include <cstddef>

template <typename T>
class LinkedList {
 public:
  LinkedList() : dummy_head_(new Node), dummy_tail_(new Node), size_(0) {
    dummy_head_->next = dummy_tail_;
    dummy_tail_->prev = dummy_head_;
  }

  virtual ~LinkedList() {
    Node *cur = dummy_head_->next;
    while (cur != dummy_tail_) {
      cur = cur->next;
      delete cur->prev;
    }
    delete dummy_head_;
    delete dummy_tail_;
  }

  std::size_t Size() const { return size_; }

  bool IsEmpty() const { return size_ == 0; }

  void PushHead(T const &value) {
    Node *fresh = new Node(value);
    fresh->prev = dummy_head_;
    fresh->next = dummy_head_->next;
    dummy_head_->next->prev = fresh;
    dummy_head_->next = fresh;
    ++size_;
  }

  void PushTail(T const &value) {
    Node *fresh = new Node(value);
    fresh->next = dummy_tail_;
    fresh->prev = dummy_tail_->prev;
    dummy_tail_->prev->next = fresh;
    dummy_tail_->prev = fresh;
    ++size_;
  }

  bool PopHead(T &value) {
    if (IsEmpty()) {
      return false;
    }
    auto real_head = dummy_head_->next;
    value = real_head->value;
    real_head->next->prev = dummy_head_;
    dummy_head_->next = real_head->next;
    --size_;
    delete real_head;
    return true;
  }

  bool PopTail(T &value) {
    if (IsEmpty()) {
      return false;
    }
    auto real_tail = dummy_tail_->prev;
    value = real_tail->value;
    real_tail->prev->next = dummy_tail_;
    dummy_tail_->prev = real_tail->prev;
    --size_;
    delete real_tail;
    return true;
  }

  bool InsertAt(std::size_t index, T const &value) {
    if (index >= size_) {
      return false;
    }
    Node *cur = dummy_head_->next;
    for (std::size_t i = 0; i < index; ++i) {
      cur = cur->next;
    }
    Node *fresh = new Node(value);
    fresh->next = cur;
    fresh->prev = cur->prev;
    cur->prev = fresh;
    fresh->prev->next = fresh;
    ++size_;
    return true;
  }

  bool RemoveAt(std::size_t index, T &value) {
    if (index >= size_ || IsEmpty()) {
      return false;
    }
    Node *cur = dummy_head_->next;
    for (std::size_t i = 0; i < index; ++i) {
      cur = cur->next;
    }
    value = cur->value;
    cur->next->prev = cur->prev;
    cur->prev->next = cur->next;
    --size_;
    delete cur;
    return true;
  }

  bool SetAt(std::size_t index, T const &value) {
    if (IsEmpty() || index >= size_) {
      return false;
    }
    Node *cur = dummy_head_->next;
    for (std::size_t i = 0; i < index; ++i) {
      cur = cur->next;
    }
    cur->value = value;
    return true;
  }

  bool GetAt(std::size_t index, T &value) const {
    if (IsEmpty() || index >= size_) {
      return false;
    }
    Node *cur = dummy_head_->next;
    for (std::size_t i = 0; i < index; ++i) {
      cur = cur->next;
    }
    value = cur->value;
    return true;
  }

 private:
  struct Node {
    Node() : value(), prev(nullptr), next(nullptr) {}

    explicit Node(T const &outer_value)
        : value(outer_value), prev(nullptr), next(nullptr) {}

    T value;
    Node *prev;
    Node *next;
  };
  static void swap(Node *a, Node *b) {
    // TODO
  }
  Node *dummy_head_;
  Node *dummy_tail_;
  std::size_t size_;
};

#endif