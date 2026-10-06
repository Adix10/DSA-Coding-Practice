# Palindrome Number

## Problem

Given an integer `x`, return `true` if `x` is a palindrome, otherwise return `false`.

A palindrome number reads the same from left to right and right to left.

## Approach

- Negative numbers are not palindromes.
- Store the original number.
- Reverse the digits of the number using `% 10` and `/ 10`.
- Compare the reversed number with the original number.
- If both are equal, return `true`; otherwise, return `false`.

## Examples

### Example 1

Input:
`x = 121`

Output:
`true`

Explanation:
`121` reads the same in both directions.

### Example 2

Input:
`x = -121`

Output:
`false`

Explanation:
Negative numbers are not considered palindromes.

### Example 3

Input:
`x = 10`

Output:
`false`

Explanation:
Reversed number is `01`, which is different from `10`.

## Complexity

- Time Complexity: `O(log x)`
- Space Complexity: `O(1)`