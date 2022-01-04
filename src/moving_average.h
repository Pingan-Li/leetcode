/**
 * @file moving_average.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __MOVING_AVERAGE_H__
#define __MOVING_AVERAGE_H__
namespace leetcode {
class MovingAverage {
public:
  double _average;
  int _size;
  int _elemNum;
  explicit MovingAverage(int size) : _size(size), _elemNum(0), _average(0.0) {}

  double next(int val);
};
} // namespace leetcode

#endif