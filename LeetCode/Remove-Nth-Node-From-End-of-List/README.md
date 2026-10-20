# Remove Nth Node From End of List

## Problem Statement
Given the head of a linked list, remove the nth node from the end of the list and return the updated head.

## Approach
Use the two-pointer technique with a dummy node. Move the fast pointer n + 1 steps ahead, then move both fast and slow pointers until fast reaches null. The slow pointer will be positioned just before the node to remove. Skip that node and return dummy.next.

## Example
Input: head = [1,2,3,4,5], n = 2

Output: [1,2,3,5]

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)
