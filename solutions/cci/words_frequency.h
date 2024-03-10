/**
 * @file words_frequency.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-03-10
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_CCI_WORDS_FREQUENCY_H_
#define SOLUTIONS_CCI_WORDS_FREQUENCY_H_
#include <string>
#include <unordered_map>
#include <vector>
namespace leetcode {
class WordsFrequency {
 public:
  WordsFrequency(std::vector<std::string> const& book) {
    for (auto&& word : book) {
      ++map_[word];
    }
  }

  int GetFrequency(std::string const& word) {
    auto result = map_.find(word);
    return result == map_.end() ? 0 : result->second;
  }

 private:
  std::unordered_map<std::string, int> map_;
};
}  // namespace leetcode
#endif  // SOLUTIONS_CCI_WORDS_FREQUENCY_H_