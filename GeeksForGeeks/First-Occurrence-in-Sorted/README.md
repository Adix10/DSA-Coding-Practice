# First Occurrence in Sorted

## Problem Statement
Given a sorted array `arr[]` and an integer `k`, find the first occurrence of `k` using binary search. Return its 0-based index, or `-1` if it is not present.

## Approach
- Initialize `low`, `high`, and `ans`.
- Calculate the middle index.
- If `arr[mid]` equals `k`, store `mid` and search the left half for an earlier occurrence.
- If `arr[mid]` is smaller than `k`, search the right half.
- Otherwise, search the left half.
- Return `ans`.

## Examples

**Example 1**

Input: `arr = [1, 2, 3, 4, 5], k = 4`

Output: `3`

**Example 2**

Input: `arr = [11, 22, 33, 44, 55], k = 445`

Output: `-1`

**Example 3**

Input: `arr = [1, 1, 1, 1, 2], k = 1`

Output: `0`

## Complexity Analysis
- Time Complexity: `O(log n)`
- Space Complexity: `O(1)`