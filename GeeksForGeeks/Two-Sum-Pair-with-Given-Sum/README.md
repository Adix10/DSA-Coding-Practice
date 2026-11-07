# Two Sum - Pair with Given Sum

## Problem
Given an array of integers `arr[]` and an integer `target`, determine whether there exist two distinct indices such that the sum of their elements equals the target.

## Approach
Use an `unordered_set` to store previously visited elements.

1. Traverse the array.
2. Calculate the complement as `target - arr[i]`.
3. Check if the complement exists in the set.
4. If found, return `true`.
5. Otherwise, insert the current element into the set.
6. If no valid pair exists, return `false`.

## Example

**Input:**
```text
arr[] = [0, -1, 2, -3, 1]
target = -2
```

**Output:**
```text
true
```

**Explanation:**

The pair `-3` and `1` gives the target sum.

`-3 + 1 = -2`

## Complexity Analysis

- **Time Complexity:** O(n) average
- **Space Complexity:** O(n)

## Algorithm
Hashing using `unordered_set`.
