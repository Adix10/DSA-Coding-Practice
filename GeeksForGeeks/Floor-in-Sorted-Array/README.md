# Floor in Sorted Array

## Problem

Given a sorted array and an integer x, find the index of the largest
element that is less than or equal to x. If multiple occurrences exist,
return the index of the last occurrence. If no such element exists,
return -1.

## Approach

-   Use Binary Search to find the floor element.
-   If arr\[mid\] \<= x, store the index and search in the right half.
-   Otherwise, search in the left half.
-   Return the last valid index.

## Example

Input: arr = \[1, 2, 8, 10, 10, 12, 19\], x = 11

Output: 4

Explanation: The largest element less than or equal to 11 is 10, whose
last occurrence is at index 4.

## Complexity

-   Time Complexity: O(log n)
-   Space Complexity: O(1)
