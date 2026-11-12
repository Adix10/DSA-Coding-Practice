# Union of 2 Sorted Arrays

## Problem Statement
Given two sorted arrays that may contain duplicate elements, return the union of both arrays in sorted order. The union contains only distinct elements.

## Approach
- Use two pointers to traverse both arrays.
- Compare the current elements of both arrays.
- Add the smaller element to the result.
- If both elements are equal, add it only once and move both pointers.
- Skip duplicate elements before inserting.
- Add the remaining elements from either array.
- Return the result.

## Example

Input:
```text
a[] = [2, 2, 3, 4, 5]
b[] = [1, 1, 2, 3, 4]
```

Output:
```text
[1, 2, 3, 4, 5]
```

## Complexity Analysis
- Time Complexity: O(n + m)
- Auxiliary Space: O(1), excluding the output array.

## Language
C++