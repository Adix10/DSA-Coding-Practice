# Efficient PAN Linking

## Problem Statement
There are 20 officers who process the same number of PAN-Aadhaar linking applications. Given N applications, find the minimum number of applications left unprocessed.

## Approach
- Calculate the remainder of N divided by 20.
- Since N can contain up to 100 digits, read it as a string.
- Calculate the remainder digit by digit to avoid integer overflow.
- Print the final remainder.

## Example
Input: N = 127

Output: 7

Explanation: Each officer processes 6 applications, so 127 - (20 × 6) = 7 applications remain unprocessed.

## Complexity
- Time Complexity: O(D) per test case, where D is the number of digits in N.
- Auxiliary Space: O(1)