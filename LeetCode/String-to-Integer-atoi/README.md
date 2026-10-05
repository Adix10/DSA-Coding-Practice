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

## Solution

```java
class Solution {
    public int myAtoi(String s) {
        int i = 0, sign = 1, num = 0;

        while (i < s.length() && s.charAt(i) == ' ')
            i++;

        if (i < s.length() && s.charAt(i) == '-') {
            sign = -1;
            i++;
        } else if (i < s.length() && s.charAt(i) == '+') {
            i++;
        }

        while (i < s.length() && Character.isDigit(s.charAt(i))) {
            int digit = s.charAt(i) - '0';

            if (num > (Integer.MAX_VALUE - digit) / 10)
                return sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;

            num = num * 10 + digit;
            i++;
        }

        return num * sign;
    }
}
```