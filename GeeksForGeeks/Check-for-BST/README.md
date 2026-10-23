# Check for BST

## Problem Statement
Given a binary tree, determine whether it is a Binary Search Tree (BST). Every node in the left subtree must contain a smaller value, and every node in the right subtree must contain a greater value.

## Approach
Use recursion with a valid range for each node. Check whether each node's value lies strictly within its allowed range. Update the range for the left and right subtrees accordingly.

## Complexity
- Time Complexity: O(n)
- Auxiliary Space: O(h), where h is the height of the tree.