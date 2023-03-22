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

  ASSERT_EQ(dynamic_array.Head(), 0);
  ASSERT_EQ(dynamic_array.Tail(), 99);

  dynamic_array[50] = 5050;
  ASSERT_EQ(dynamic_array[50], 5050);

  for (int i = 0; i < 100; ++i) {
    std::cout << dynamic_array.Tail() << ", ";
    dynamic_array.Remove();
    --count;
    ASSERT_EQ(dynamic_array.GetSize(), count);
  }
}

TEST(DynamicArray, case1) {
  DynamicArray<int> dynamic_array;
  ASSERT_EQ(dynamic_array.IsEmpty(), true);
  dynamic_array.Append(1);
  ASSERT_EQ(dynamic_array.Head(), dynamic_array.Tail());
}

TEST(DynamicArray, case2) {
  DynamicArray<int> dynamic_array;
  ASSERT_EQ(dynamic_array.IsEmpty(), true);
  dynamic_array.Append(1);
  dynamic_array.Append(2);
  dynamic_array.Append(3);
  dynamic_array.Append(4);
  dynamic_array.Append(5);
  for (auto const& item : dynamic_array) {
    std::cout << item << ", ";
  }
}

}  // namespace datastructures