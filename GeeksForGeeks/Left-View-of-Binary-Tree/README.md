# Left View of Binary Tree

## Problem
Given the root of a binary tree, return the nodes visible when the tree is viewed from the left side.

## Approach
- Use Level Order Traversal (BFS).
- Maintain a queue to traverse the tree level by level.
- Store the first node of each level in the answer.
- Add the left and right children to the queue.
- Return the answer vector.

## Example

Input:
root = [1, 2, 3, 4, 5, N, N]

Output:
[1, 2, 4]

Explanation:
From the left side of the binary tree, nodes 1, 2, and 4 are visible.

## Complexity Analysis
- Time Complexity: O(N)
- Auxiliary Space: O(N)

Where N is the number of nodes in the binary tree.
