# Merge Two Sorted Lists

## Problem Statement
Given the heads of two sorted linked lists, merge them into one sorted linked list by splicing together their nodes and return its head.

## Approach
- Create a dummy node to simplify merging.
- Compare the current nodes of both lists.
- Attach the smaller node to the merged list and move forward.
- Attach the remaining nodes when either list becomes empty.
- Return the next node of the dummy node as the merged list's head.

## Example
Input: list1 = [1, 2, 4], list2 = [1, 3, 4]

Output: [1, 1, 2, 3, 4, 4]

## Complexity
- Time Complexity: O(n + m)
- Auxiliary Space: O(1)