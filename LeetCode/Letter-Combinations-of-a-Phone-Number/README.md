# Letter Combinations of a Phone Number

## Problem Statement
Given a string containing digits from 2 to 9, return all possible letter combinations that the number could represent using the letters mapped to each digit on a phone keypad.

## Approach
Use backtracking to generate all possible combinations. For each digit, iterate through its mapped letters and recursively process the next digit. When all digits have been processed, add the combination to the result list.

## Example

Input: `digits = "23"`

Output: `["ad","ae","af","bd","be","bf","cd","ce","cf"]`

## Complexity Analysis
- Time Complexity: O(n × 4ⁿ)
- Space Complexity: O(n) auxiliary space, excluding the output list.