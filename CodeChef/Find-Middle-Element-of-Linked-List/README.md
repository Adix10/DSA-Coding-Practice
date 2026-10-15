# Find Middle Element of Linked List

## Problem Statement
Given the head of a singly linked list of length N, find the value of its middle element. For an even-length list, return the second middle element.

## Approach
- Initialize two pointers, `slow` and `fast`, at the head.
- Move `slow` one node at a time and `fast` two nodes at a time.
- When `fast` reaches the end of the list, `slow` points to the middle element.
- Return the value of the middle node.

## Example

**Input:** `1 -> 2 -> 3 -> 4 -> 5`

**Output:** `3`

**Explanation:** The middle element of the linked list is `3`.

## Complexity Analysis
- **Time Complexity:** O(N)
- **Auxiliary Space:** O(1)