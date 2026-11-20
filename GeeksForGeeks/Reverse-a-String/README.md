# Reverse a String

## Problem Statement
Given a string `s`, reverse the string and return the reversed string.

## Approach
- Initialize two pointers: `left` at the beginning and `right` at the end.
- Swap the characters at both pointers.
- Move `left` forward and `right` backward.
- Repeat until both pointers meet.

## Example

**Input:**
```text
s = "Geeks"
```

**Output:**
```text
"skeeG"
```

## Complexity Analysis
- **Time Complexity:** O(n) – Each character is visited once.
- **Space Complexity:** O(1) – Reverses the string in-place without using extra space.

## Algorithm
1. Find the length of the string.
2. Set `left = 0` and `right = length - 1`.
3. Swap characters while `left < right`.
4. Increment `left` and decrement `right`.
5. Return the reversed string.