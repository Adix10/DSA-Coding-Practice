# Valid Parentheses

## Problem Statement
Given a string `s` containing only the characters `(`, `)`, `{`, `}`, `[` and `]`, determine whether the input string is valid.

A string is valid if every opening bracket is closed by the same type of bracket in the correct order.

## Approach
- Use a stack to store opening brackets.
- For each closing bracket, check whether the stack is empty.
- Pop the top element and verify that it matches the closing bracket.
- Return `true` if all brackets match and the stack is empty; otherwise, return `false`.

## Examples

**Example 1**

Input: `s = "()"`

Output: `true`

**Example 2**

Input: `s = "()[]{}"`

Output: `true`

**Example 3**

Input: `s = "([)]"`

Output: `false`

## Complexity Analysis
- Time Complexity: `O(n)`
- Space Complexity: `O(n)`