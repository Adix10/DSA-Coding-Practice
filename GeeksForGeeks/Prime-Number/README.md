# Prime Number

## Problem Statement
Given a number `n`, determine whether it is a prime number or not.

A prime number is a number greater than 1 that has exactly two positive divisors: 1 and itself.

## Approach
- If `n` is less than or equal to 1, return `false`.
- Check divisibility from 2 up to the square root of `n`.
- If any number divides `n` completely, return `false`.
- Otherwise, return `true`.

## Example

**Input:** `n = 7`

**Output:** `true`

**Explanation:** 7 has exactly two divisors: 1 and 7.

## Complexity Analysis
- **Time Complexity:** O(√n)
- **Auxiliary Space:** O(1)