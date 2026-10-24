# 26. Remove Duplicates from Sorted Array

## Problem Statement
Given a sorted integer array `nums`, remove duplicates in-place so that each unique element appears only once. Preserve the relative order of the elements and return the number of unique elements `k`.

The first `k` elements of the array must contain the unique elements in sorted order.

## Approach
Use the two-pointer technique. Initialize `k = 1` because the first element is unique. Traverse the array from index `1`. Whenever the current element differs from the last unique element, place it at index `k` and increment `k`. Finally, return `k`.

## Example
**Input:** `nums = [0,0,1,1,1,2,2,3,3,4]`

**Output:** `5`

**Modified Array:** `[0,1,2,3,4,_,_,_,_,_]`

## Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
