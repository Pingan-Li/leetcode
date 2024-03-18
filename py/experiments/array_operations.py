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


class ArrayOperationsTest(unittest.TestCase):
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


if __name__ == '__main__':
    unittest.main()
