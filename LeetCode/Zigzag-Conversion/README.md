# Zigzag Conversion

## Problem

Given a string `s` and an integer `numRows`, write the characters of the string in a zigzag pattern across the given number of rows.

Then read the characters row by row to produce the converted string.

For example, with `s = "PAYPALISHIRING"` and `numRows = 3`:

```text
P   A   H   N
A P L S I I G
Y   I   R
```

The result is:

```text
PAHNAPLSIIGYIR
```

## Approach

- Create a `StringBuilder` for each row.
- Traverse the string character by character.
- Move downward through the rows, then upward when reaching the last row.
- Append each character to its current row.
- Combine all rows to get the final answer.
- If `numRows` is `1` or greater than the string length, return the original string.

## Complexity

- Time Complexity: `O(N)`
- Space Complexity: `O(N)`

## Solution

```java
class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1 || numRows >= s.length())
            return s;

        StringBuilder[] rows = new StringBuilder[numRows];

        for (int i = 0; i < numRows; i++)
            rows[i] = new StringBuilder();

        int row = 0;
        int direction = 1;

        for (char c : s.toCharArray()) {
            rows[row].append(c);

            if (row == 0)
                direction = 1;
            else if (row == numRows - 1)
                direction = -1;

            row += direction;
        }

        StringBuilder answer = new StringBuilder();

        for (StringBuilder r : rows)
            answer.append(r);

        return answer.toString();
    }
}
```