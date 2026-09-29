# Missing in Array

## Problem

Given an array `arr[]` of size `n - 1` containing distinct integers from `1` to `n`, find the missing element.

The array represents a permutation of the numbers from `1` to `n` with exactly one number missing.

## Approach

Use the XOR operation.

First, XOR all numbers from `1` to `n`.

Then, XOR all elements present in the array.

Every number that appears in both sets cancels out because:

```text
x ^ x = 0
```

The only number left is the missing number.

## Example

Input:

```text
arr = [1, 2, 3, 5]
n = 5
```

Output:

```text
4
```

Explanation:

The numbers from `1` to `5` are:

```text
1, 2, 3, 4, 5
```

Only `4` is missing.

## Complexity

Time Complexity: O(n)

Space Complexity: O(1)

## Platform

GeeksforGeeks

## Language

C

## Difficulty

Easy