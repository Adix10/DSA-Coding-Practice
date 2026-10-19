# Array Search

## Problem Statement
Given an array `arr[]` of `n` integers and an integer `x`, find the index of the first occurrence of `x`. Return `-1` if the element is not present.

## Approach
- Traverse the array from left to right.
- If the current element equals `x`, return its index.
- If the element is not found after traversing the array, return `-1`.

## Example
Input: `arr = [1, 2, 3, 4], x = 3`

Output: `2`

## Complexity Analysis
- Time Complexity: `O(n)`
- Auxiliary Space Complexity: `O(1)`
