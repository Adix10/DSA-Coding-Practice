# Missing And Repeating

## Problem Statement
Given an unsorted array of size n containing elements from 1 to n, one number is missing and another number occurs twice. Find both numbers.

## Approach
- Create a frequency array to count occurrences of each number.
- The number occurring twice is the repeating number.
- The number occurring zero times is the missing number.
- Return the repeating number first, followed by the missing number.

## Example
Input: arr = [4, 3, 6, 2, 1, 1]

Output: [1, 5]

Explanation: 1 is the repeating number and 5 is the missing number.

## Complexity
- Time Complexity: O(n)
- Auxiliary Space: O(n)