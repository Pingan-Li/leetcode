/**
 * @file array_list_unittest.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-26
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "base/array_list.h"

#include <cstddef>
#include <vector>

#include "base/exception.h"
#include "gtest/gtest.h"

namespace base {

// class ArrayListFixture : public testing::Test {
//  protected:
//   void SetUp() override {}

//   void TearDown() override {}
// };

// TEST_F(ArrayListFixture, Constrctor) {}
TEST(array_list, empty_array_list) {
  ArrayList<int> array_list;
  ASSERT_EQ(array_list.IsEmpty(), true);
  ASSERT_EQ(array_list.Size(), 0);
  ASSERT_THROW(array_list.Get(0), base::IndexOutOfRangeException);
  ASSERT_THROW(array_list.Set(0, 0), base::IndexOutOfRangeException);
  ASSERT_THROW(array_list.Head(), base::IndexOutOfRangeException);
  ASSERT_THROW(array_list.Tail(), base::IndexOutOfRangeException);
  ASSERT_THROW(array_list.Remove(0), base::IndexOutOfRangeException);
  ASSERT_NO_THROW(array_list.Insert(0, 0));
}

TEST(array_list, one_element_array_list) {
  ArrayList<int> array_list;
  array_list.Insert(0, 0);
  ASSERT_EQ(array_list.IsEmpty(), false);
  ASSERT_EQ(array_list.Size(), 1);
  ASSERT_NO_THROW(array_list.Get(0));
  ASSERT_EQ(array_list.Get(0), 0);
  ASSERT_NO_THROW(array_list.Set(0, 12));
  ASSERT_EQ(array_list.Get(0), 12);
  ASSERT_NO_THROW(array_list.Head());
  ASSERT_NO_THROW(array_list.Tail());
  ASSERT_EQ(array_list.Head(), 12);
  ASSERT_EQ(array_list.Tail(), 12);
  ASSERT_NO_THROW(array_list.Remove(0));
  ASSERT_NO_THROW(array_list.Insert(0, 124));
  auto result = array_list.Remove(0);
  ASSERT_EQ(124, result);
  ASSERT_EQ(array_list.Size(), 0);
  ASSERT_EQ(array_list.IsEmpty(), true);
}

TEST(array_list, expandsion) {
  ArrayList<int> array_list;
  for (std::size_t i = 0; i < 10241024; ++i) {
    array_list.Insert(i, i);
  }
}

class TestObject {
 public:
  TestObject() { std::cout << "Object constructed!\n"; }

  TestObject(TestObject const&) { std::cout << "Object copyed!\n"; }

  ~TestObject() { std::cout << "Object destructed!\n"; }

 private:
};

TEST(array_list, vector) {
  TestObject object[5];
  std::cout << "heck!\n";
  object[2] = {};
  object[2] = {};
  object[2] = {};
  std::cout << "heck!\n";
}
}  // namespace base
