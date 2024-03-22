"""
"""


import unittest


class Node:
    def __init__(self) -> None:
        self.key_ = None
        self.value_ = None
        self.ls_ = None
        self.rs_ = None
        self.size_ = 0


class Comparator:
    def compare(self, lhs, rhs):
        return lhs - rhs


class BinarySearchTree:
    def __init__(self, comparetor) -> None:
        self.root_ = None
        self.comparator_ = comparetor

    def size(self) -> int:
        return self.__size(self.root_)

    def __size(self, node: Node) -> int:
        if node is None:
            return 0
        else:
            return node.size_

    def get(self, key):
        return self.__get(self.root_, key)

    def __get(self, node: Node, key):
        if node is None:
            return None
        compare_result = self.comparator_.compare(key, node.key_)
        if compare_result < 0:
            return self.__get(node.ls_, key)
        elif compare_result > 0:
            return self.__get(node.rs_, key)
        return node.value_

    def put(self, key, value) -> None:
        self.root_ = self.__put(self.root_, key, value)

    def __put(self, node: Node, key, value) -> Node:
        if node is None:
            new_node = Node()
            new_node.key_ = key
            new_node.value_ = value
            new_node.size_ = 1
            return new_node
        compare_reuslt = self.comparator_.compare(key, node.key_)
        if compare_reuslt < 0:
            node.ls_ = self.__put(node.ls_, key, value)
        elif compare_reuslt > 0:
            node.rs_ = self.__put(node.rs_, key, value)
        else:
            node.value_ = value
        node.size_ = self.__size(node.ls_) + self.__size(node.rs_) + 1
        return node

    def preorder_traversal(self) -> list:
        nodes = []
        BinarySearchTree.__preorder_traversal(self.root_, nodes)
        return nodes

    @staticmethod
    def __preorder_traversal(node: Node, nodes: list):
        if node is None:
            return
        nodes.append(node)
        BinarySearchTree.__preorder_traversal(node.ls_, nodes)
        BinarySearchTree.__preorder_traversal(node.rs_, nodes)

    def inorder_traversal(self) -> list:
        nodes = []
        BinarySearchTree.__inorder_traversal(self.root_, nodes)
        return nodes

    @staticmethod
    def __inorder_traversal(node: Node, nodes: list):
        if node is None:
            return
        BinarySearchTree.__inorder_traversal(node.ls_, nodes)
        nodes.append(node)
        BinarySearchTree.__inorder_traversal(node.rs_, nodes)

    def postorder_traversal(self) -> list:
        nodes = []
        BinarySearchTree.__postorder_traversal(self.root_, nodes)
        return nodes

    @staticmethod
    def __postorder_traversal(node: Node, nodes: list):
        if node is None:
            return
        BinarySearchTree.__postorder_traversal(node.ls_, nodes)
        BinarySearchTree.__postorder_traversal(node.rs_, nodes)
        nodes.append(node)


class BinarySearchTreeTestCase(unittest.TestCase):
    def test(self):
        bst = BinarySearchTree(Comparator())
        self.assertEqual(bst.size(), 0)
        bst.put(0, 1)
        self.assertEqual(bst.size(), 1)
        self.assertEqual(bst.get(0), 1)
        bst.put(8, 9)
        bst.put(6, 7)
        bst.put(4, 5)
        bst.put(2, 3)
        self.assertEqual(bst.size(), 5)
        self.assertEqual(bst.get(2), 3)
        self.assertEqual(bst.get(4), 5)
        self.assertEqual(bst.get(6), 7)
        self.assertEqual(bst.get(8), 9)
        nodes = bst.preorder_traversal()
        for n in nodes:
            print(n.key_)


if __name__ == "__main__":
    suite = unittest.TestSuite()
    suite.addTest(BinarySearchTreeTestCase("test"))
    unittest.TextTestRunner().run(suite)
