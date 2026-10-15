# Left Rotate Array

## Problem Statement
Given an array `arr[]`, rotate the array to the left (counter-clockwise) by `d` positions. The rotation must be performed in place. The array is considered circular.

## Approach
- Calculate `d % n` to handle rotations greater than the array length.
- Reverse the first `d` elements.
- Reverse the remaining `n - d` elements.
- Reverse the entire array to obtain the left-rotated result.

## Examples

**Example 1**

Input: `arr[] = [1, 2, 3, 4, 5], d = 2`

Output: `[3, 4, 5, 1, 2]`

**Example 2**

Input: `arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3`

Output: `[8, 10, 12, 14, 16, 18, 20, 2, 4, 6]`

**Example 3**

Input: `arr[] = [7, 3, 9, 1], d = 9`

Output: `[3, 9, 1, 7]`

## Complexity Analysis
- **Time Complexity:** O(n)
- **Auxiliary Space:** O(1)