# Array Subset

## Problem Statement

Given two arrays `a[]` and `b[]`, determine whether `b[]` is a subset of `a[]`. Duplicate elements must also be considered.

## Approach

- Use an unordered map to store the frequency of each element in array `a`.
- Traverse array `b` and check whether each element is available.
- If an element is unavailable, return `false`.
- Otherwise, decrease its frequency by one.
- If all elements are found, return `true`.

## Complexity Analysis

- **Time Complexity:** O(n + m) average
- **Space Complexity:** O(n)

Where `n` and `m` are the sizes of arrays `a` and `b`, respectively.
