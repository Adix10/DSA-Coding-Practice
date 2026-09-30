# Median of Two Sorted Arrays

LeetCode Problem 4 — Hard

## Problem

Given two sorted arrays `nums1` and `nums2`, return the median of the two sorted arrays.

The overall time complexity must be `O(log(m+n))`.

## Approach

Instead of merging both arrays, we use binary search to find the correct partition between the two arrays.

We always perform binary search on the smaller array.

For a valid partition:

```text
left1 <= right2
left2 <= right1
```

This means all elements on the left side are smaller than or equal to all elements on the right side.

If the total number of elements is odd, the median is the maximum element on the left.

If the total number of elements is even, the median is:

```text
(maximum element on left + minimum element on right) / 2
```

## Example 1

```text
Input:
nums1 = [1,3]
nums2 = [2]

Combined:
[1,2,3]

Output:
2.0
```

## Example 2

```text
Input:
nums1 = [1,2]
nums2 = [3,4]

Combined:
[1,2,3,4]

Output:
2.5
```

## Complexity

Time Complexity: `O(log(min(m,n)))`

Space Complexity: `O(1)`

## Concepts Used

- Arrays
- Binary Search
- Partitioning
- Median
- Two Sorted Arrays