/**
 * @file vector_helper.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "algorithms/helper.h"

#include <algorithm>
#include <cstddef>
#include <vector>

namespace algorithms {
void SpawnRandomVector(std::vector<int> &data, std::size_t nelem) {
  data.clear();
  data.resize(nelem);
  std::generate(data.begin(), data.end(), std::rand);
}
}  // namespace algorithms