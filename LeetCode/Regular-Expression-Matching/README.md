# Regular Expression Matching

## Problem Statement

Given a string `s` and a pattern `p`, determine whether `p` matches the entire string `s`.

The pattern supports:

- `.` → Matches any single character.
- `*` → Matches zero or more occurrences of the preceding element.

The match must cover the complete string.

## Approach

Use Dynamic Programming.

Let `dp[i][j]` represent whether the first `i` characters of `s` match the first `j` characters of `p`.

- If the current pattern character is a normal character or `.`, check whether it matches the current string character.
- If the current pattern character is `*`:
  - Treat `*` as matching zero occurrences.
  - If the preceding character matches, allow `*` to match one or more occurrences.
- Initialize `dp[0][0]` as `true`.
- Patterns such as `a*`, `a*b*` can match an empty string.

## Example

### Example 1

```text
Input: s = "aa", p = "a"
Output: false
```

### Example 2

```text
Input: s = "aa", p = "a*"
Output: true
```

### Example 3

```text
Input: s = "ab", p = ".*"
Output: true
```

## Complexity

- Time Complexity: `O(n × m)`
- Space Complexity: `O(n × m)`

Where `n` is the length of `s` and `m` is the length of `p`.