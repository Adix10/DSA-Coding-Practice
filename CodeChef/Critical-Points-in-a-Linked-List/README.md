# Critical Points in a Linked List

## Problem Statement
Given the head of a linked list, count the critical points. A critical point is a node that is either a local minimum or a local maximum. The first and last nodes cannot be critical points.

A local minimum is a node whose value is strictly smaller than both neighbouring nodes. A local maximum is a node whose value is strictly greater than both neighbouring nodes.

## Approach
Traverse the linked list and compare each node's value with its previous and next nodes. Count the node if it is a local minimum or local maximum. Ignore the first and last nodes.

## Examples

**Example 1**

Input: `8 1 2 3 3 3 5 1 3`

Output: `2`

Explanation: The values 1 and 5 are critical points.

**Example 2**

Input: `7 1 2 3 2 1 3 2`

Output: `3`

Explanation: The 3rd, 5th, and 6th nodes are critical points.

## Complexity Analysis

- Time Complexity: O(N)
- Space Complexity: O(1) auxiliary space.