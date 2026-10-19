# Check if the Array Is Sorted and Rotated

## Problem Statement
Given an array `nums`, check whether it can be obtained by rotating a non-decreasing sorted array. Duplicate elements are allowed.

## Approach
- Count the number of times an element is greater than the next element.
- Compare the last element with the first using modulo.
- If the count is at most one, the array is sorted and rotated; otherwise, return false.

## Example
Input: `nums = [6, 7, 1, 2, 3, 4, 5]`

Output: `true`

## Complexity Analysis
- Time Complexity: `O(n)`
- Auxiliary Space Complexity: `O(1)`
