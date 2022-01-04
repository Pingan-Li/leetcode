/**
 * @file moving_average.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "moving_average.h"
namespace leetcode {
double MovingAverage::next(int val) {
  double heck = static_cast<double>(val);
  if (_elemNum < _size) {
    _average = (((_elemNum * _average) / (++_elemNum))) + (heck / _elemNum);
  } else {
    _average += heck / _size;
  }
  return _average;
}
} // namespace leetcode
