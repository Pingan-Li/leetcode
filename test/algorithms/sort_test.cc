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

#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

#include "algorithms/comparator.h"
#include "algorithms/helper.h"
#include "testing/googletest/include/gtest/gtest.h"

namespace algorithms {

TEST(BubbleSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 10);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(BubbleSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(BubbleSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(BubbleSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(BubbleSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);

  LessThan<int> comparator{};

  algorithms::BubbleSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingBubbleSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::BubbleSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingBubbleSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);
  algorithms::BubbleSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingBubbleSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);
  algorithms::BubbleSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingBubbleSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 4);
  algorithms::BubbleSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingBubbleSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);
  algorithms::BubbleSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(DescendingBubbleSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::BubbleSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DescendingBubbleSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);
  algorithms::BubbleSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DescendingBubbleSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);
  algorithms::BubbleSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DescendingBubbleSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 4);
  algorithms::BubbleSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DescendingBubbleSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);
  algorithms::BubbleSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(SelectionSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(SelectionSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);

  LessThan<int> comparator{};

  algorithms::SelectionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingSelectionSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingSelectionSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingSelectionSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingSelectionSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingSelectionSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(DescendingSelectionSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DescendingSelectionSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data);
  algorithms::SelectionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DescendingSelectionSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DescendingSelectionSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(DescendingSelectionSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::SelectionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(InsertionSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(InsertionSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);

  LessThan<int> comparator{};

  algorithms::InsertionSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingInsertionSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::InsertionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingInsertionSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);
  algorithms::InsertionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingInsertionSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);
  algorithms::InsertionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingInsertionSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);
  algorithms::InsertionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(AscendingInsertionSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);
  algorithms::InsertionSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(DesencdingInsertionSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::InsertionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DesencdingInsertionSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);
  algorithms::InsertionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DesencdingInsertionSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);
  algorithms::InsertionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DesencdingInsertionSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);
  algorithms::InsertionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(DesencdingInsertionSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 10000);
  algorithms::InsertionSort(data, DescendingTag{});
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(ShellSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);

  LessThan<int> comparator{};

  algorithms::ShellSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(ShellSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);

  LessThan<int> comparator{};

  algorithms::ShellSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(ShellSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);

  LessThan<int> comparator{};

  algorithms::ShellSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(ShellSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 100);

  LessThan<int> comparator{};

  algorithms::ShellSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(ShellSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 1000000);

  LessThan<int> comparator{};

  algorithms::ShellSort(data, comparator);

  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(QuickSort, case0) {
  std::vector<int> data;
  SpawnRandomVector(data, 1);
  algorithms::QuickSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(QuickSort, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);
  algorithms::QuickSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(QuickSort, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);
  algorithms::QuickSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(QuickSort, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 4);
  algorithms::QuickSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(QuickSort, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 1000000);
  algorithms::QuickSort(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

TEST(QuickSortDesc, case0) {
  std::vector<int> data{5, 9, 1, 8, 2, 7, 3, 6, 4};
  algorithms::QuickSort(data, DescendingTag());
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(QuickSortDesc, case1) {
  std::vector<int> data;
  SpawnRandomVector(data, 2);
  algorithms::QuickSort(data, DescendingTag());
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(QuickSortDesc, case2) {
  std::vector<int> data;
  SpawnRandomVector(data, 3);
  algorithms::QuickSort(data, DescendingTag());
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(QuickSortDesc, case3) {
  std::vector<int> data;
  SpawnRandomVector(data, 1000);
  algorithms::QuickSort(data, DescendingTag());
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(QuickSortDesc, case4) {
  std::vector<int> data;
  SpawnRandomVector(data, 1000000);
  algorithms::QuickSort(data, DescendingTag());
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end(), GreaterThan<int>{}));
}

TEST(InplaceMergeSort, case0) {
  std::vector<int> data{5, 9, 1, 8, 2, 7, 3, 6, 4};
  algorithms::MergeSort(data);
  Print(data);
  ASSERT_TRUE(std::is_sorted(data.begin(), data.end()));
}

void Heck() {
  int nCount = 0;
  int x = 99;
  while (x) {
    nCount++;
    x = x & (x - 1);
  }
  std::cout << nCount;
}

// class A {};
// class B {
//   B() {}
// };

// class C {
//   C(){};
//   virtual void Fn() = 0;
// };

// TEST(Main, test) {
//     int a=9;
//     auto fun1=[=]{return ++a;};//代码片段1
//     auto fun2=[&]{return ++a;};//代码片段2
//     auto fun3=[=]()mutable{return ++a;};//代码片段3
//     return 0;

// }

}  // namespace algorithms
