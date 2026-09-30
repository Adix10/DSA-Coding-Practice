# Necklace

CodeChef Problem

## Problem

Given a necklace with `n` pearls and an integer `k`, move the first `k` pearls to the end of the necklace.

In other words, perform a left rotation of the array by `k` positions.

## Approach

We use Python list slicing.

For an array:

```text
[1, 5, 3, 4, 2]
```

and `k = 2`:

```text
arr[k:] = [3, 4, 2]
arr[:k] = [1, 5]
```

Combining them:

```text
[3, 4, 2] + [1, 5]
```

Result:

```text
[3, 4, 2, 1, 5]
```

We use `k % n` to handle cases where `k` is equal to `n`.

## Example

```text
Input:
2
5 3
1 5 3 4 2
6 5
10 1 2 9 8 2

Output:
4 2 1 5 3
2 10 1 2 9 8
```

## Complexity

Time Complexity: `O(n)` per test case

Space Complexity: `O(n)`

## Concepts Used

- Arrays
- List Slicing
- Left Rotation
- Modular Arithmetic