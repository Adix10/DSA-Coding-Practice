# Largest in Array

## Problem Statement
Given an array `arr[]`, find and return the largest element in the array.

## Approach
- Initialize `max` with the first element of the array.
- Traverse the remaining elements.
- If the current element is greater than `max`, update `max`.
- Return `max` after traversing the array.

## Example
**Input:** `arr[] = [1, 8, 7, 56, 90]`

**Output:** `90`

**Explanation:** The largest element in the array is `90`.

## Complexity
- **Time Complexity:** O(n)
- **Auxiliary Space:** O(1)