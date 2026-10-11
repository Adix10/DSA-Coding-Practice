# Integer to Roman

## Problem Statement
Given an integer `num`, convert it into a Roman numeral.

Roman numerals use the symbols I, V, X, L, C, D, and M to represent values. Subtractive forms such as IV, IX, XL, XC, CD, and CM are used to represent specific numbers.

## Approach
Use the greedy approach by storing Roman numeral values and their corresponding symbols in descending order, including subtractive forms. Iterate through the values and append the corresponding symbol while the number is greater than or equal to that value. Subtract the value from the number and continue until the number becomes zero.

## Examples

**Example 1**

Input: `num = 3749`

Output: `"MMMDCCXLIX"`

**Example 2**

Input: `num = 58`

Output: `"LVIII"`

**Example 3**

Input: `num = 1994`

Output: `"MCMXCIV"`

## Complexity Analysis

- Time Complexity: O(1)
- Space Complexity: O(1) auxiliary space, excluding the output string.