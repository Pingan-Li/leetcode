/**
 * @file sort_test.cc
 * @author Li Pingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2023-03-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "algorithms/sort.h"

#include <gtest/gtest.h>

#include <algorithm>
#include <iostream>
#include <vector>

#include "algorithms/comparator.h"
#include "algorithms/vector_helper.h"

namespace algorithms {

TEST(BubbleSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 10);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(BubbleSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(BubbleSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(BubbleSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(BubbleSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

}  // namespace algorithms
