# Longest Subarray with Sum K

## Problem Statement
Given an array of integers and an integer k, find the length of the longest subarray whose sum equals k. Return 0 if no such subarray exists.

## Approach
Use prefix sum and a HashMap to store the earliest index of each prefix sum. For every index, check whether the current prefix sum minus k exists in the map. If it does, update the maximum subarray length. Store only the first occurrence of each prefix sum to maximize the length.

## Example
Input: arr = [10, 5, 2, 7, 1, -10], k = 15

Output: 6

Explanation: The entire array has a sum of 15, so the longest subarray has length 6.

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(n)