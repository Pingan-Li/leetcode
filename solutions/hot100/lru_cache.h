/**
 * @file lru_cache.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_HOT100_LRU_CACHE_H_
#define SOLUTIONS_HOT100_LRU_CACHE_H_

#include <unordered_map>
namespace leetcode {

class LRUCache {
 private:
  struct DoubleLinkedListNode {
    int key = 0;
    int value = 0;
    DoubleLinkedListNode* prev = nullptr;
    DoubleLinkedListNode* next = nullptr;
  };

  void AddToHead(DoubleLinkedListNode* node) {
    if (!node) return;
    node->prev = head_;
    node->next = head_->next;
    head_->next->prev = node;
    head_->next = node;
  }

  void DetachNode(DoubleLinkedListNode* node) {
    if (!node) return;
    node->prev->next = node->next;
    node->next->prev = node->prev;
  }

  void MoveToHead(DoubleLinkedListNode* node) {
    if (!node) return;
    DetachNode(node);
    AddToHead(node);
  }

 public:
  LRUCache(int capacity)
      : size_(0),
        capacity_(capacity),
        head_(new DoubleLinkedListNode),
        tail_(new DoubleLinkedListNode) {
    head_->prev = nullptr;
    head_->next = tail_;
    tail_->prev = head_;
    tail_->next = nullptr;
  }

  int get(int key) {
    if (!cache_.contains(key)) return -1;
    DoubleLinkedListNode* node = cache_[key];
    MoveToHead(node);
    return node->value;
  }

  void put(int key, int value) {
    if (!cache_.contains(key)) {
      DoubleLinkedListNode* node = new DoubleLinkedListNode;
      node->key = key;
      node->value = value;
      cache_[key] = node;
      AddToHead(node);
      ++size_;
      if (size_ > capacity_) {
        DoubleLinkedListNode* last = tail_->prev;
        DetachNode(last);
        cache_.erase(last->key);
        delete last;
        --size_;
      }
    } else {
      DoubleLinkedListNode* node = cache_[key];
      node->value = value;
      MoveToHead(node);
    }
  }

 private:
  int size_;
  int capacity_;
  DoubleLinkedListNode* head_;
  DoubleLinkedListNode* tail_;
  std::unordered_map<int, DoubleLinkedListNode*> cache_;
};
}  // namespace leetcode

#endif  // SOLUTIONS_HOT100_LRU_CACHE_H_