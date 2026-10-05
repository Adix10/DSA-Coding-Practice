# Mountain Peak

## Problem

For each mountain peak, find the next higher peak that appears on its right.

If no higher peak exists, return `-1`.

## Approach

Use a stack and traverse the array from right to left.

Remove all peaks from the stack that are smaller than or equal to the current peak. The top of the stack then gives the next higher peak.

## Example

```text
Input:
4
6 5 3 6

Output:
-1 6 6 -1
```

## Complexity

Time: O(n)

Space: O(n)