# Longest Common Prefix

## Problem Statement
Given an array of strings, find the longest common prefix shared by all strings. If no common prefix exists, return an empty string.

## Approach
Start with the first string as the prefix. Compare it with every other string. If a string does not start with the current prefix, remove the last character and check again. If the prefix becomes empty, return an empty string. Otherwise, return the final prefix.

## Examples

**Example 1**

Input: `strs = ["flower", "flow", "flight"]`

Output: `"fl"`

**Example 2**

Input: `strs = ["dog", "racecar", "car"]`

Output: `""`

## Complexity
- Time Complexity: `O(n × m²)` in the worst case, where `n` is the number of strings and `m` is the maximum string length.
- Auxiliary Space: `O(m)` for the prefix string operations.