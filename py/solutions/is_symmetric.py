"""
"""
from typing import Optional
from tree_node import TreeNode
from abc import ABC, abstractmethod
import unittest


class Solution(ABC):
    @abstractmethod
    def is_symmetric(self, root: Optional[TreeNode]) -> bool:
        ...


class SolutionImpl(Solution):

    def check(self, left: TreeNode, right: TreeNode) -> bool:
        if left is None and right is None:
            return True
        if left is None or right is None:
            return False
        return (
            left.val == right.val
            and self.check(left.left, right.right)
            and self.check(left.right, right.left)
        )

    def is_symmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return False
        return self.check(root.left, root.right)


class Test(unittest.TestCase):
    def __init__(self, methodName: str = "runTest") -> None:
        super().__init__(methodName)

        self.solution = SolutionImpl()

    def test_0(self):
        tree_root = TreeNode(1)
        tree_root.left = TreeNode(1)
        tree_root.right = TreeNode(1)

        self.assertTrue(self.solution.is_symmetric(tree_root))

    def test_1(self):
        tree_root = TreeNode(1)
        tree_root.left = TreeNode(1)
        tree_root.right = TreeNode(2)

        self.assertFalse(self.solution.is_symmetric(tree_root))

    def test_2(self):
        tree_root = TreeNode(1)

        self.assertTrue(self.solution.is_symmetric(tree_root))

    def test_3(self):
        tree_root = TreeNode(1)
        tree_root.left = TreeNode(2)
        tree_root.right = TreeNode(2)
        tree_root.left.left = TreeNode(3)
        tree_root.right.left = TreeNode(3)

        self.assertFalse(self.solution.is_symmetric(tree_root))


if __name__ == "__main__":
    unittest.main()
