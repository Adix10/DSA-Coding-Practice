# Container With Most Water

## Problem Statement

Given an integer array `height`, where each element represents the height of a vertical line, find two lines that form a container with the x-axis such that the container holds the maximum amount of water.

Return the maximum area of water the container can store.

## Approach

- Use two pointers: `left` at the beginning and `right` at the end of the array.
- Calculate the area using the shorter line's height multiplied by the distance between the pointers.
- Update the maximum area whenever a larger area is found.
- Move the pointer pointing to the shorter line.
- Repeat until both pointers meet.

## Examples

**Example 1**

Input: `height = [1,8,6,2,5,4,8,3,7]`

Output: `49`

Explanation: The lines at indices 1 and 8 form a container with area `7 × 7 = 49`.

**Example 2**

Input: `height = [1,1]`

Output: `1`

Explanation: The width is 1 and the height is 1, so the area is 1.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
