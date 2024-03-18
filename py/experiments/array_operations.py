"""
Array is the best.
"""
from enum import Enum
import copy
import unittest
import random


class Result(Enum):
    OK = 0,
    UndefinedError = 1,
    IndexOutOfRange = 2


def remove_at(array: list, index: int) -> Result:
    if (not (index < len(array))):
        return Result.IndexOutOfRange
    # Always use [closed, open) intervals.
    for i in range(index, len(array) - 1):
        array[i] = array[i + 1]
    array.pop()
    return Result.OK


def insert_at(array: list, index: int, data: int) -> Result:
    if (index > len(array)):
        return Result.IndexOutOfRange
    if (index == len(array) - 1):
        array.append(data)
        return Result.OK

    array.append(None)
    for i in range(len(array) - 1,  index, -1):
        array[i] = array[i - 1]
    array[index] = data
    return Result.OK


def merge_arrays(array_a: list, array_b: list, merged: list):
    a = 0
    b = 0
    while a < len(array_a) or b < len(array_b):
        if a >= len(array_a):
            current = array_b[b]
            b += 1
        elif b >= len(array_b):
            current = array_a[a]
            a += 1
        else:
            if array_a[a] < array_b[b]:
                current = array_a[a]
                a += 1
            else:
                current = array_b[b]
                b += 1
        merged.append(current)


def merge_arrays_inplace(array_a: list, array_b: list):
    index_a = 0
    index_b = 0


class ArrayRemovalTest(unittest.TestCase):
    def test_remove_at_front(self):
        array = list(range(10))
        remove_at(array, 0)
        expectation = [1, 2, 3, 4, 5, 6, 7, 8, 9]
        self.assertEqual(array, expectation)

    def test_remove_at_back(self):
        array = list(range(10))
        remove_at(array, len(array) - 1)
        expectation = [0, 1, 2, 3, 4, 5, 6, 7, 8]
        self.assertEqual(array, expectation)

    def test_remove_at_stress(self):
        round = 100
        for r in range(round):
            array_size = random.randint(0, 100000)
            array = list(range(array_size))
            random.shuffle(array)
            expectation = copy.deepcopy(array)
            index_to_remove = random.randint(1, array_size - 1)
            expectation.pop(index_to_remove)
            remove_at(array, index_to_remove)
            self.assertEqual(array, expectation)
            print("Round = {}".format(r))


class ArrayInsertionTest(unittest.TestCase):

    def test_insert_at_back(self):
        array = list(range(5))
        insert_at(array, len(array) - 1, 123)
        expectation = [0, 1, 2, 3, 4, 123]
        self.assertEqual(array, expectation)

    def test_insert_at_front(self):
        array = list(range(5))
        insert_at(array, 0, 123)
        expectation = [123, 0, 1, 2, 3, 4]
        self.assertEqual(array, expectation)

    def test_insert_at_stress(self):
        round = 100
        for r in range(round):
            array_size = random.randint(0, 100000)
            array = list(range(array_size))
            random.shuffle(array)
            expectation = copy.deepcopy(array)
            index_to_insert = random.randint(1, array_size - 1)
            expectation.insert(index_to_insert, array_size)
            insert_at(array, index_to_insert, array_size)
            self.assertEqual(array, expectation)
            print("Round = {}".format(r))


class ArrayMergingTest(unittest.TestCase):

    def test_merge_arrays(self):
        a = [1,]
        b = [0, 2, 4, 6, 8]
        merged = list()
        merge_arrays(a, b, merged)
        expectation = [0, 1, 2, 4, 6, 8]
        self.assertEqual(merged, expectation)

    def test_merge_arrays_stress(self):
        limit = 1000000
        round = 1000
        for r in range(round):
            array_size_a = random.randint(0, limit)
            array_size_b = random.randint(0, limit)
            array_a = [random.randint(0, limit) for i in range(array_size_a)]
            array_b = [random.randint(0, limit) for i in range(array_size_b)]
            array_a.sort()
            array_b.sort()
            expectation = array_a + array_b
            expectation.sort()
            result = []
            merge_arrays(array_a, array_b, result)
            self.assertEqual(result, expectation)
            print("Round {} finished.".format(r))


if __name__ == '__main__':
    suite = unittest.TestSuite()
    suite.addTest(ArrayMergingTest("test_merge_arrays_stress"))
    unittest.TextTestRunner().run(suite)
