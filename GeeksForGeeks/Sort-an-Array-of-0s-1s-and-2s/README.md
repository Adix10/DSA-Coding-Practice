# Sort an Array of 0s, 1s and 2s

## Problem Statement

Given an array containing only `0`, `1`, and `2`, sort the array in ascending order.

The solution should use a one-pass algorithm with constant extra space.

## Approach

Use the **Dutch National Flag Algorithm** with three pointers:

- `l` → position where the next `0` should be placed.
- `m` → current element being checked.
- `h` → position where the next `2` should be placed.

For each element:

- If it is `0`, swap it with the element at `l` and move both `l` and `m`.
- If it is `1`, simply move `m`.
- If it is `2`, swap it with the element at `h` and move `h`.

This divides the array into three regions:

```text
0s | 1s | Unknown | 2s
```

Continue until `m` passes `h`.

## Examples

### Example 1

```text
Input:
[0, 1, 2, 0, 1, 2]

Output:
[0, 0, 1, 1, 2, 2]
```

### Example 2

```text
Input:
[0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]

Output:
[0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
```

## Complexity

- Time Complexity: `O(N)`
- Space Complexity: `O(1)`