# Equilibrium Point

## Problem Statement
Given an integer array `arr[]`, find the first equilibrium point using 0-based indexing. An equilibrium point is an index where the sum of all elements before it equals the sum of all elements after it. Return `-1` if no equilibrium point exists.

## Approach
Calculate the total sum of the array. Traverse the array while maintaining the left sum. Subtract the current element from the total sum to obtain the right sum. If the left sum equals the right sum, return the current index. Otherwise, update the left sum and continue.

## Example

Input: `arr = [1, 2, 0, 3]`

Output: `2`

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)