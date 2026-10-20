# Convert String to Number

## Problem Statement
Given a string representing a positive number, convert it into its numerical equivalent without using built-in parsing, conversion libraries, or direct type casting methods.

## Approach
Traverse the string character by character. Multiply the current number by 10 and add the numeric value of the current digit using the difference between its ASCII value and the ASCII value of `'0'`.

## Example
Input: `123`

Output: `123`

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)
