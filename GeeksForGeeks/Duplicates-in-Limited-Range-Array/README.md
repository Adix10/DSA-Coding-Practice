# Duplicates in Limited Range Array

## Problem

Given an array of size `n` containing numbers from `1` to `n`, where each number appears at most twice, find all the numbers that appear twice.

## Approach

- Create a count array to store how many times each number appears.
- Traverse the given array and increase the count of each element.
- Traverse the count array.
- Add the elements whose count is exactly `2` to the result.

## Examples

### Example 1

Input:
`[2, 3, 1, 2, 3]`

Output:
`[2, 3]`

### Example 2

Input:
`[3, 1, 2]`

Output:
`[]`

## Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`