"""
"""
from typing import Optional
from tree_node import TreeNode
from abc import ABC, abstractmethod
import unittest


class Solution(ABC):
    @abstractmethod
    def is_same_tree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        ...


# Recursive solution.
class SolutionImplA(Solution):
    def is_same(self, p: TreeNode, q: TreeNode) -> bool:
        if p is None and q is None:
            return True
        if p is None or q is None:
            return False
        return p.val == q.val and self.is_same(p.left, q.left) and self.is_same(p.right, q.right)

    def is_same_tree(self, p: TreeNode, q: TreeNode) -> bool:
        return self.is_same(p, q)


# Iterative solution.
# This is good.
class SolutionImplB(Solution):
    def is_same_tree(self, p: TreeNode, q: TreeNode) -> bool:
        if p is None and q is None:
            return True

        curr_p = p
        curr_q = q
        p_stack = [curr_p]
        q_stack = [curr_q]

        while p_stack or q_stack:
            if curr_p == None and curr_q == None:
                curr_p = p_stack.pop()
                curr_q = q_stack.pop()
                continue

            if curr_p == None or curr_q == None:
                return False

            if curr_p.val != curr_q.val:
                return False

            if curr_p.right:
                p_stack.append(curr_p.right)
            curr_p = curr_p.left
            if curr_q.right:
                q_stack.append(curr_q.right)
            curr_q = curr_q.left

        return True


class Test(unittest.TestCase):
    def __init__(self, methodName: str = "runTest") -> None:
        super().__init__(methodName)

        self.solution = SolutionImplB()

    def test_0(self):
        tree_0 = TreeNode(1)
        tree_0.left = TreeNode(3)
        tree_0.right = TreeNode(2)

        tree_1 = TreeNode(1)
        tree_1.right = TreeNode(3)
        tree_1.left = TreeNode(3)

        self.assertFalse(self.solution.is_same_tree(tree_0, tree_1))

    def test_1(self):
        self.assertTrue(self.solution.is_same_tree(None, None))

    def test_2(self):
        tree_0 = TreeNode(1)
        tree_0.left = TreeNode(3)
        tree_0.right = TreeNode(2)

        self.assertTrue(tree_0, tree_0)


if __name__ == "__main__":
    unittest.main()
