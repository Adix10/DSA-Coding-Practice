# Maximum Subarray Sum

GeeksForGeeks Problem

## Problem

Given an integer array `arr[]`, find the maximum sum of a subarray containing at least one element.

## Approach

This problem is solved using Kadane's Algorithm.

We maintain two variables:

- `currentSum` — maximum sum of a subarray ending at the current element.
- `maxSum` — maximum sum found so far.

For every element, we decide whether to start a new subarray or continue the previous subarray.

## Example

```text
Input:
[2, 3, -8, 7, -1, 2, 3]

Output:
11
```

The maximum-sum subarray is:

```text
[7, -1, 2, 3]
```

Sum:

```text
7 + (-1) + 2 + 3 = 11
```

## Complexity

Time Complexity: `O(n)`

Space Complexity: `O(1)`

## Concepts Used

- Arrays
- Kadane's Algorithm
- Subarrays
- Dynamic Programming