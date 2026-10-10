# Remove Duplicates from Sorted List

## Problem Statement

Given the head of a non-empty sorted linked list, remove duplicate nodes so that each element appears only once. Return the updated linked list.

## Approach

- Start from the head node using a current pointer.
- Compare the current node's value with the next node's value.
- If both values are equal, skip the next node.
- Otherwise, move the current pointer forward.
- Continue until the end of the list and return the head.

## Examples

**Example 1**

Input: `1 1 6 8 8`

Output: `1 6 8`

**Example 2**

Input: `1 2 3 4 5`

Output: `1 2 3 4 5`

**Example 3**

Input: `5 5 5 5`

Output: `5`

## Complexity Analysis

- **Time Complexity:** O(N)
- **Space Complexity:** O(1)
