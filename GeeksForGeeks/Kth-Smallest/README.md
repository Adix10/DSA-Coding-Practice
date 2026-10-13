# Kth Smallest

## Problem Statement
Given an integer array `arr[]` and an integer `k`, find the kth smallest element in the array.

## Approach
- Sort the array in ascending order.
- Return the element at index `k - 1`.

## Example

**Input:** `arr = [7, 10, 4, 3, 20, 15], k = 3`

**Output:** `7`

**Explanation:** After sorting, the array becomes `[3, 4, 7, 10, 15, 20]`. The third smallest element is `7`.

## Complexity
- Time Complexity: O(n log n)
- Auxiliary Space: O(log n) on average for sorting.