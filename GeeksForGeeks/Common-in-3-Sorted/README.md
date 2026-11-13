# Common in 3 Sorted Arrays

## Problem
Given three sorted arrays, find all elements that are common in all three arrays.

- Return elements in non-decreasing order.
- Include each common element only once.
- Return an empty array if no common elements exist.

## Approach
Three Pointer Approach

1. Initialize three pointers i, j, and k to 0.
2. Compare the current elements of all three arrays.
3. If all three elements are equal, add the element to the result.
4. Increment all three pointers.
5. Otherwise, increment the pointer containing the smallest element.
6. Avoid duplicates before inserting into the result.
7. Return the result.

## Example

Input:
a[] = [1, 5, 10, 20, 40, 80]
b[] = [6, 7, 20, 80, 100]
c[] = [3, 4, 15, 20, 30, 70, 80, 120]

Output:
[20, 80]

## Complexity Analysis

- Time Complexity: O(n + m + p)
- Auxiliary Space Complexity: O(1), excluding output space.

## Language
C++