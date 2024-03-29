"""
"""

import unittest
from typing import Any


class Node:
    def __init__(self, value=None) -> None:
        self.l = None
        self.r = None
        self.v = value


class Visitor:
    def __init__(self) -> None:
        self.nodes = []

    def __call__(self, node: Node) -> Any:
        self.nodes.append(node)


def pre_order(root: Node, visitor: Visitor):
    if not root:
        return

    current = root
    stack = [current]
    while stack:
        if current:
            visitor(current)
            if current.r:
                stack.append(current.r)
            current = current.l
        else:
            current = stack.pop()


def pre_order2(root: Node, visitor: Visitor):
    if not root:
        return
    stack = list()
    stack.append(root)
    node = root

    while stack:
        node = stack.pop()
        visitor(node)
        if node.r:
            stack.append(node.r)
        if node.l:
            stack.append(node.l)


def in_order(root: Node, visitor: Visitor):
    if root is None:
        return

    current = root
    stack = list()
    while stack or current:
        if current:
            stack.append(current)
            current = current.l
        else:
            current = stack.pop()
            visitor(current)
            current = current.r


def in_order2(root: Node, visitor: Visitor):
    if not root:
        return

    stack = list()
    node = root
    while stack or node:
        if node:
            stack.append(node)
            node = node.l
        else:
            node = stack.pop()
            visitor(node)
            node = node.r


def post_order(root: Node, visitor: Visitor):
    if not root:
        return
    current = root
    main_stack = list()
    right_child_stack = list()

    while main_stack or current:
        if current:
            if current.r:
                right_child_stack.append(current.r)
            main_stack.append(current)
            current = current.l
        else:
            current = main_stack[-1]
            if right_child_stack and current.r == right_child_stack[-1]:
                current = right_child_stack.pop()
            else:
                visitor(current)
                main_stack.pop()
                current = None


def post_order2(root: Node, visistor: Visitor):
    current = root
    main_stack = list()
    main_stack.append(current)
    helper_stack = list()
    while main_stack:
        current = main_stack.pop()
        helper_stack.append(current)
        if current.l:
            main_stack.append(current.l)

        if current.r:
            main_stack.append(current.r)

    while helper_stack:
        visistor(helper_stack.pop())


class TreeTransversalTest(unittest.TestCase):
    def __init__(self, methodName: str = "runTest") -> None:
        super().__init__(methodName)
        self.tree_root = Node(1)
        self.tree_root.l = Node(2)
        self.tree_root.r = Node(3)
        self.tree_root.l.l = Node(4)
        self.tree_root.r.l = Node(5)
        self.tree_root.r.r = Node(6)
        self.tree_root.r.l.l = Node(7)
        self.tree_root.r.l.r = Node(8)

        self.preorder_result = [1, 2, 4, 3, 5, 7, 8, 6]
        self.inorder_result = [4, 2, 1, 7, 5, 8, 3, 6]
        self.postorder_result = [4, 2, 7, 8, 5, 6, 3, 1]

    def test_preorder_transveral(self):
        visitor = Visitor()
        pre_order(self.tree_root, visitor)
        self.assertEqual([node.v for node in visitor.nodes],
                         self.preorder_result)

    def test_preorder2_transveral(self):
        visitor = Visitor()
        pre_order2(self.tree_root, visitor)
        self.assertEqual([node.v for node in visitor.nodes],
                         self.preorder_result)

    def test_inorder_transveral(self):
        visitor = Visitor()
        in_order(self.tree_root, visitor)
        self.assertEqual([node.v for node in visitor.nodes],
                         self.inorder_result)

    def test_inorder2_transveral(self):
        visitor = Visitor()
        in_order(self.tree_root, visitor)
        self.assertEqual([node.v for node in visitor.nodes],
                         self.inorder_result)

    def test_postorder_transveral(self):
        visitor = Visitor()
        post_order(self.tree_root, visitor)
        self.assertEqual([node.v for node in visitor.nodes],
                         self.postorder_result)

    def test_postorder2_transveral(self):
        visitor = Visitor()
        post_order2(self.tree_root, visitor)
        self.assertEqual([node.v for node in visitor.nodes],
                         self.postorder_result)


if __name__ == "__main__":
    unittest.main()
