# Indexes of Subarray Sum

## Problem

Given an array containing non-negative integers and a target value, find a continuous subarray whose sum is equal to the target.

Return the 1-based starting and ending indices of the first matching subarray.

If no such subarray exists, return `[-1]`.

## Approach

Use the sliding window technique.

Start with an empty window and keep adding elements to the current sum.

If the sum becomes greater than the target, remove elements from the beginning of the window until the sum becomes less than or equal to the target.

When the sum becomes equal to the target, return the starting and ending positions.

Since all elements are non-negative, the sliding window approach works efficiently.

## Example

Input:
```text
arr = [1, 2, 3, 7, 5]
target = 12
```

Output:
```text
[2, 4]
```

Explanation:

The subarray from index 2 to 4 is:

```text
2 + 3 + 7 = 12
```

## Complexity

Time Complexity: O(n)

Space Complexity: O(1)

## Platform

GeeksforGeeks

## Language

C

## Difficulty

Medium