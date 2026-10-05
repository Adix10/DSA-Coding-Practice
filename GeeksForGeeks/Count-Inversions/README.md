# Count Inversions

## Problem

Find the number of pairs `(i, j)` such that `i < j` and `arr[i] > arr[j]`.

## Approach

Use Merge Sort to count inversions while sorting the array.

When an element from the right half is smaller than an element from the left half, all remaining elements in the left half form inversions.

## Example

```text
Input:  [2, 4, 1, 3, 5]
Output: 3
```

Inversions:

```text
(2,1), (4,1), (4,3)
```

## Complexity

Time: O(n log n)

Space: O(n)