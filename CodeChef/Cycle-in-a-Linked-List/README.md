# Cycle in a Linked List

## Problem Statement
Given a linked list, return the node where the cycle begins. If the linked list has no cycle, return `None`.

## Approach
Use Floyd's Cycle Detection Algorithm with slow and fast pointers. Move the slow pointer one step and the fast pointer two steps at a time. If they meet, a cycle exists. Reset the slow pointer to the head and move both pointers one step at a time until they meet again. That node is the beginning of the cycle. If the pointers never meet, return `None`.

## Example
Input: `5 -> 6 -> 8 -> 6 ...`

Output: Node with value `6`

Explanation: The cycle begins at the node containing `6`.

## Complexity
- Time Complexity: `O(N)`
- Auxiliary Space: `O(1)`