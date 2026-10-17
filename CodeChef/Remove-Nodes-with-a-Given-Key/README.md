# Remove Nodes with a Given Key

## Problem Statement
Given a singly linked list and an integer `key`, delete all nodes whose values are equal to `key`. Return the updated head of the linked list. If all nodes are deleted, the list becomes empty.

## Approach
Traverse the linked list and remove all nodes matching the given key. First, handle matching nodes at the head, then check the remaining nodes and skip those whose values equal the key.

## Example

Input: `head = [10, 20, 30, 20, 40, 50], key = 20`

Output: `[10, 30, 40, 50]`

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)