# 4Sum

## Problem Statement
Given an integer array `nums` and an integer `target`, return all unique quadruplets `[nums[a], nums[b], nums[c], nums[d]]` such that the sum of the four elements equals the target. All four indices must be distinct.

## Approach
- Sort the array.
- Fix the first two elements using nested loops.
- Use two pointers to find the remaining two elements.
- Skip duplicate elements to ensure unique quadruplets.
- Use `long` to avoid integer overflow while calculating the sum.

## Example
Input: `nums = [1,0,-1,0,-2,2], target = 0`

Output: `[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]`

## Complexity Analysis
- Time Complexity: `O(n^3)`
- Auxiliary Space Complexity: `O(log n)` excluding the output.
