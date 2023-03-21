/**
 * @file dynamic_array_unittest.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "datastructures/dynamic_array.h"

#include "gtest/gtest.h"

namespace datastructures {

TEST(DynamicArray, case0) {
  std::size_t count{0};
  DynamicArray<int> dynamic_array;
  for (int i = 0; i < 100; ++i) {
    dynamic_array.Append(i);
    ++count;
    ASSERT_EQ(dynamic_array.GetSize(), count);
  }
}

}  // namespace datastructures