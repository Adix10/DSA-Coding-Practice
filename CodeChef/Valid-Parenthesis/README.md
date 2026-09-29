# Valid Parenthesis

## Problem

Given a string `S` consisting only of `(` and `)`, determine whether the string is a valid parenthesis string.

For a valid parenthesis string:

- Every opening parenthesis `(` must have a matching closing parenthesis `)`.
- At no point can the number of closing parentheses exceed the number of opening parentheses.
- At the end, the number of opening and closing parentheses must be equal.

Return `1` if the string is valid, otherwise return `0`.

## Approach

Use a balance counter.

For every character:

- If it is `(`, increase `balance` by 1.
- If it is `)`, decrease `balance` by 1.

If `balance` becomes negative at any point, the string is invalid because there is a closing parenthesis without a matching opening parenthesis.

After processing the complete string, `balance` must be `0` for the string to be valid.

## Example

Input:
```text
3
()(())
(()()
))((
```

Output:
```text
1
0
0
```

Explanation:

`()(())` is valid because every opening parenthesis has a matching closing parenthesis.

`(()()` is invalid because one opening parenthesis is not closed.

`))((` is invalid because closing parentheses appear before matching opening parentheses.

## Complexity

Time Complexity: O(n)

Space Complexity: O(1)

## Platform

CodeChef

## Language

Python

## Difficulty

Easy