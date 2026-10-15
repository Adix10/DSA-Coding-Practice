# 3Sum Closest

## Problem Statement
Given an integer array `nums` and an integer `target`, find three integers at distinct indices whose sum is closest to the target. Return the sum of these three integers.

## Approach
- Sort the array in ascending order.
- Fix one element and use two pointers, `left` and `right`, to find the other two elements.
- Update the closest sum whenever a sum is closer to the target.
- If the sum is smaller than the target, move `left` forward; otherwise, move `right` backward.
- Return the closest sum. If an exact match is found, return it immediately.

## Example

**Input:** `nums = [-1, 2, 1, -4]`, `target = 1`

**Output:** `2`

**Explanation:** The sum `-1 + 2 + 1 = 2` is closest to the target `1`.

## Complexity Analysis
- **Time Complexity:** O(n²)
- **Space Complexity:** O(1) auxiliary space, excluding sorting implementation details.