# Reverse Integer

## Problem

Given a signed 32-bit integer `x`, reverse its digits. If the reversed number goes outside the 32-bit integer range, return `0`.

## Examples

```text
Input: 123
Output: 321

Input: -123
Output: -321

Input: 120
Output: 21
```

## Approach

- Get the last digit using `% 10`.
- Remove the last digit using `/ 10`.
- Add each digit to the reversed number.
- Check for overflow before updating the result.

## Complexity

Time: O(log |x|)  
Space: O(1)

## Language

Java