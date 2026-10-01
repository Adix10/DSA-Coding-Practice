# Longest Palindromic Substring

## Problem

Given a string `s`, find the longest palindromic substring in `s`.

## Approach

- Consider every character as the center of a palindrome.
- Check both odd and even length palindromes.
- Expand outward while the characters are equal.
- Store the longest palindrome found.

## Complexity

Time: O(N²)

Space: O(N)

## Language

Java