# Rotate the Array

## Problem Statement
Given an integer array `nums` and a non-negative integer `k`, rotate the array to the right by `k` positions in-place.

## Approach
Use the reversal method. First, reverse the entire array. Then, reverse the first `k` elements and the remaining elements separately. Return the modified array.

## Example
Input: nums = [10, 20, 30, 40, 50], k = 2

Output: [40, 50, 10, 20, 30]

## Complexity
Time Complexity: O(n)

Space Complexity: O(1)