/**
 * @file is_palindrome.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "is_palindrome.h"
#include "vector"

namespace leetcode {
bool isPalindrome(ListNode *head) {
  std::vector<int> vector;
  while (head) {
    vector.push_back(head->val);
    head = head->next;
  }
  auto iter = vector.begin();
  auto riter = vector.rbegin();
  while (iter != vector.end() && riter != vector.rend()) {
    if (*iter != *riter) {
      return false;
    }
    ++iter;
    ++riter;
  }
  return true;
}
} // namespace leetcode
