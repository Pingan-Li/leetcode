/**
 * @file group_anagrams.cc
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-12
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solutions/group_anagrams.h"
#include <array>
#include <cstddef>
#include <functional>
#include <numeric>
#include <unordered_map>
#include <vector>
namespace leetcode {
std::vector<std::vector<std::string>>
GroupAnagrams(std::vector<std::string> strs) {
  static auto array_hash = [integer_hash = std::hash<int>{}](
                               std::array<int, 26> const &array) -> size_t {
    return std::accumulate(
        array.begin(), array.end(), 0u,
        [&](size_t acc, int num) { return (acc << 1) ^ integer_hash(num); });
  };

  std::unordered_map<std::array<int, 26>, std::vector<std::string>,
                     decltype(array_hash)>
      map(0, array_hash);
  for (auto &&str : strs) {
    std::array<int, 26> counts{};
    int length = str.length();
    for (int i = 0; i < length; ++i) {
      counts[str[i] - 'a']++;
    }
    map[counts].emplace_back(str);
  }
  std::vector<std::vector<std::string>> ans;
  for (auto it = map.begin(); it != map.end(); ++it) {
    ans.emplace_back(it->second);
  }
  return ans;
}
} // namespace leetcode