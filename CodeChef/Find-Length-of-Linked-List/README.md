# Find the Length of the Linked List

## Problem Statement
Given a singly linked list, find and return the total number of nodes. If the linked list is empty, return 0.

## Approach
- Initialize a counter to 0.
- Traverse the linked list until the current node becomes `None`.
- Increment the counter for each node.
- Return the counter.

## Example

**Input:** `1 -> 2 -> 3 -> 4 -> 5`

**Output:** `5`

**Explanation:** The linked list contains 5 nodes.

## Complexity
- Time Complexity: O(N)
- Space Complexity: O(1)