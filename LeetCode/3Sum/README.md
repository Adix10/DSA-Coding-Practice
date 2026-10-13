# 15. 3Sum

## Problem Statement
Given an integer array `nums`, return all unique triplets `[nums[i], nums[j], nums[k]]` such that the indices are distinct and the sum of the three elements is zero.

The solution must not contain duplicate triplets.

## Approach
- Sort the array in ascending order.
- Fix one element and use two pointers to find the other two elements.
- If the sum is zero, add the triplet and move both pointers.
- If the sum is less than zero, move the left pointer forward.
- If the sum is greater than zero, move the right pointer backward.
- Skip duplicate elements to avoid duplicate triplets.

## Example

**Input:** `nums = [-1,0,1,2,-1,-4]`

**Output:** `[[-1,-1,2],[-1,0,1]]`

## Complexity
- **Time Complexity:** O(n²)
- **Space Complexity:** O(log n) auxiliary space on average for sorting, excluding the output.