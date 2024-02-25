/**
 * @file delete_and_earn.h
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2024-02-25
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef SOLUTIONS_DP_DELETE_AND_EARN_H_
#define SOLUTIONS_DP_DELETE_AND_EARN_H_

#include <map>
#include <vector>

namespace leetcode {
class Solution {
 public:
  virtual int DeleteAndEarn(std::vector<int>& nums) = 0;
};

class SolutionImpl : public Solution {
 public:
  int DeleteAndEarn(std::vector<int>& nums) override;

 private:
  int Earn(std::vector<int> const& profit);
};
}  // namespace leetcode
#endif