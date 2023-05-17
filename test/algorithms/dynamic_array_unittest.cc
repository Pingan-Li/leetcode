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

#include "algorithms/dynamic_array.h"

#include <vector>

#include "gtest/gtest.h"

namespace algorithms {

TEST(DynamicArray, case0) {
  std::size_t count{0};
  DynamicArray<int> dynamic_array;
  for (int i = 0; i < 100; ++i) {
    dynamic_array.PushBack(i);
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
  dynamic_array.PushBack(1);
  ASSERT_EQ(dynamic_array.Head(), dynamic_array.Tail());
}

TEST(DynamicArray, case2) {
  DynamicArray<int> dynamic_array;
  ASSERT_EQ(dynamic_array.IsEmpty(), true);
  dynamic_array.PushBack(1);
  dynamic_array.PushBack(2);
  dynamic_array.PushBack(3);
  dynamic_array.PushBack(4);
  dynamic_array.PushBack(5);
  // for (auto const& item : dynamic_array) {
  //   std::cout << item << ", ";
  // }
}

TEST(DynamicArray, case3) {
  std::vector<int> vec;
  std::cout << vec.front();
}

}  // namespace algorithms