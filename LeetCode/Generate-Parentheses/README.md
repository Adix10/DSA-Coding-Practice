# Generate Parentheses

## Problem Statement
Given n pairs of parentheses, generate all combinations of well-formed parentheses.

## Approach
Use backtracking to generate valid combinations. Add an opening parenthesis if the number of opening parentheses is less than n. Add a closing parenthesis only if the number of closing parentheses is less than the number of opening parentheses. Add the combination to the result when its length reaches 2 * n.

## Example
Input: n = 3

Output: ["((()))","(()())","(())()","()(())","()()()"]

## Complexity
Time Complexity: O(4^n / √n)

Space Complexity: O(n), excluding the output list.