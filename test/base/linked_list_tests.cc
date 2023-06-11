#include "base/linked_list.h"
#include "base/probe.h"
#include "glog/logging.h"
#include "gtest/gtest.h"

namespace base {

TEST(LinkedList, case_0) {
  Probe p;
  LinkedList<Probe> linked_list;
  ASSERT_EQ(linked_list.Size(), 0);
  ASSERT_TRUE(linked_list.IsEmpty());
  // PushHead
  linked_list.PushHead(p);
  ASSERT_EQ(linked_list.Size(), 1);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PushHead(p);
  ASSERT_EQ(linked_list.Size(), 2);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PushHead(p);
  ASSERT_EQ(linked_list.Size(), 3);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PushHead(p);
  ASSERT_EQ(linked_list.Size(), 4);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PushHead(p);
  ASSERT_EQ(linked_list.Size(), 5);
  ASSERT_FALSE(linked_list.IsEmpty());
  Probe result;
  // PopHead
  linked_list.PopHead(result);
  ASSERT_EQ(linked_list.Size(), 4);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PopHead(result);
  ASSERT_EQ(linked_list.Size(), 3);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PopHead(result);
  ASSERT_EQ(linked_list.Size(), 2);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PopHead(result);
  ASSERT_EQ(linked_list.Size(), 1);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PopHead(result);
  ASSERT_EQ(linked_list.Size(), 0);
  ASSERT_TRUE(linked_list.IsEmpty());
  // PushTail
  linked_list.PushTail(p);
  ASSERT_EQ(linked_list.Size(), 1);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PushTail(p);
  ASSERT_EQ(linked_list.Size(), 2);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PushTail(p);
  ASSERT_EQ(linked_list.Size(), 3);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PushTail(p);
  ASSERT_EQ(linked_list.Size(), 4);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PushTail(p);
  ASSERT_EQ(linked_list.Size(), 5);
  ASSERT_FALSE(linked_list.IsEmpty());
  // PushTail
  linked_list.PopTail(result);
  ASSERT_EQ(linked_list.Size(), 4);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PopTail(result);
  ASSERT_EQ(linked_list.Size(), 3);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PopTail(result);
  ASSERT_EQ(linked_list.Size(), 2);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PopTail(result);
  ASSERT_EQ(linked_list.Size(), 1);
  ASSERT_FALSE(linked_list.IsEmpty());
  linked_list.PopTail(result);
  ASSERT_EQ(linked_list.Size(), 0);
  ASSERT_TRUE(linked_list.IsEmpty());
}

TEST(LinkedList, case_1) {
  LinkedList<int> linked_list;
  for (int i = 0; i < 10; ++i) {
    linked_list.PushHead(i);
  }  // linked_list: 9, 8, 7, 6, 5, 4, 3, 2, 1, 0.
  ASSERT_EQ(linked_list.Size(), 10);
  int result = 0;
  int expect = 0;
  while (!linked_list.IsEmpty()) {
    linked_list.PopTail(result);
    ASSERT_EQ(result, expect);
    LOG(INFO) << "linked_list.Size() = " << linked_list.Size();
    ++expect;
  }
  ASSERT_EQ(linked_list.Size(), 0);
  for (int i = 0; i < 10; ++i) {
    linked_list.PushTail(i);
  }  // linked_list:0, 1, 2, 3, 4, 5, 6, 7, 8, 9.
  ASSERT_EQ(linked_list.Size(), 10);
  expect = 0;
  while (!linked_list.IsEmpty()) {
    linked_list.PopHead(result);
    ASSERT_EQ(result, expect);
    ++expect;
  }
  ASSERT_EQ(linked_list.Size(), 0);
}

TEST(LinkedList, case_2) {
  LinkedList<int> linked_list;
  linked_list.PushTail(0);
  linked_list.PushTail(1);
  ASSERT_EQ(linked_list.Size(), 2);
  ASSERT_FALSE(linked_list.IsEmpty());
  int result = 0;

  bool flag = linked_list.GetAt(1, result);
  ASSERT_TRUE(flag);
  ASSERT_EQ(result, 1);
  flag = linked_list.SetAt(1, 42);
  ASSERT_TRUE(flag);
  flag = linked_list.GetAt(1, result);
  ASSERT_TRUE(flag);
  ASSERT_EQ(result, 42);
}

}  // namespace base

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  google::InitGoogleLogging(argv[0]);
  FLAGS_logtostderr = 1;
  FLAGS_colorlogtostderr = 1;
  int result = RUN_ALL_TESTS();
  google::ShutdownGoogleLogging();
  return result;
}