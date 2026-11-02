# Peak in Array

## Problem Statement
Given an array `arr[]` where no two adjacent elements are equal, find the index of any peak element.

A peak element is greater than its adjacent elements. Elements outside the array are considered negative infinity.

## Approach
- Use Binary Search to find a peak element.
- Calculate the middle index.
- If `arr[mid] < arr[mid + 1]`, move to the right half.
- Otherwise, move to the left half, including `mid`.
- Return `low` when `low == high`.

## Example
Input: `arr = [1, 2, 4, 5, 7, 8, 3]`

Output: `5`

Explanation: Element `8` at index `5` is a peak because it is greater than its adjacent elements.

## Complexity
- Time Complexity: `O(log n)`
- Space Complexity: `O(1)`
