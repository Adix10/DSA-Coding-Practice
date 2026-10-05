# String to Integer (atoi)

## Problem

Convert a given string into a 32-bit signed integer without using built-in string-to-number conversion functions.

## Approach

1. Ignore leading spaces.
2. Check for `+` or `-`.
3. Read digits and build the number.
4. Stop when a non-digit character is found.
5. Handle integer overflow and return the required limit.

## Example

```text
Input:  " -042"
Output: -42
```

```text
Input:  "1337c0d3"
Output: 1337
```

## Complexity

Time: O(n)

Space: O(1)
