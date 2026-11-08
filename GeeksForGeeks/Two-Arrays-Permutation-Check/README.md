# Two Arrays Permutation Check

## Problem Statement
Given two arrays `a[]` and `b[]` of equal size, determine whether they are permutations of each other. Both arrays must contain the same elements with the same frequency.

## Approach
1. Sort both arrays in ascending order.
2. Compare the sorted arrays.
3. If both arrays are equal, return `true`.
4. Otherwise, return `false`.

## Example

**Input:**
```text
a[] = [1, 2, 5, 4, 0]
b[] = [2, 4, 5, 0, 1]
```

**Output:**
```text
true
```

**Explanation:**

Both arrays contain the same elements and can be rearranged into `[0, 1, 2, 4, 5]`.

## Complexity Analysis
- **Time Complexity:** O(n log n)
- **Auxiliary Space:** O(1), excluding sorting stack space.

## Solution
Implemented in `solution.cpp` using the sorting approach.