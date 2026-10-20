# Parenthesis Checker

## Problem Statement
Given a string containing parentheses `()`, curly braces `{}`, and square brackets `[]`, determine whether the expression is balanced. Every opening bracket must have a matching closing bracket of the same type, in the correct order.

## Approach
Use a stack to store opening brackets. For each closing bracket, check whether the stack is empty and whether the top opening bracket matches the closing bracket. If they do not match, return false. After processing the entire string, the expression is balanced only if the stack is empty.

## Examples

Input: `[{()}]`

Output: `true`

Input: `([{]})`

Output: `false`

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(n)
