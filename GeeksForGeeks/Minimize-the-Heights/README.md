# Minimize the Heights

## Problem Statement
Given an array `arr[]` representing the heights of towers and a positive integer `k`, modify each tower's height by either adding `k` or subtracting `k` exactly once. The resulting height must not be negative. Find the minimum possible difference between the maximum and minimum tower heights.

## Approach
1. Sort the array in ascending order.
2. Initialize the answer with the original difference between the maximum and minimum heights.
3. Consider each possible split in the sorted array:
   - Increase the smaller heights by `k`.
   - Decrease the larger heights by `k`.
4. Skip a split if the tower being decreased would become negative.
5. Update the minimum difference at every valid split.

## Examples

**Example 1**

Input: `k = 2, arr = [1, 5, 8, 10]`

Output: `5`

**Example 2**

Input: `k = 3, arr = [3, 9, 12, 16, 20]`

Output: `11`

## Complexity
- **Time Complexity:** `O(N log N)` — sorting the array.
- **Auxiliary Space:** Depends on the sorting implementation.
