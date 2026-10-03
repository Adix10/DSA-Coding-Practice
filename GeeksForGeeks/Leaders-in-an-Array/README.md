# Leaders in an Array

## Problem

Given an array of positive integers, find all the leaders in the array.

An element is a leader if it is greater than or equal to all elements on its right. The rightmost element is always a leader.

## Example

```text
Input: [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]
```

## Approach

- Start from the rightmost element.
- Keep track of the maximum element seen so far.
- If the current element is greater than or equal to the maximum, it is a leader.
- Reverse the result because elements are found from right to left.

## Complexity

Time: O(n)  
Space: O(n)

## Language

C