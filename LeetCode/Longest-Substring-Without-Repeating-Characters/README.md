# Longest Substring Without Repeating Characters

## Problem

Given a string `s`, find the length of the longest substring without repeating characters.

A substring is a continuous sequence of characters.

## Approach

Use the sliding window technique.

Maintain two pointers, `left` and `right`, to represent the current substring.

Use an array `lastSeen` to store the last seen position of each character.

If a character repeats inside the current window, move `left` to the position after its previous occurrence.

Update the maximum length at every step.

## Example

Input:
```text
s = "abcabcbb"
```

Output:
```text
3
```

Explanation:

The longest substring without repeating characters is `"abc"`, with length 3.

## Complexity

Time Complexity: O(n)

Space Complexity: O(1), using a fixed-size array of 128 characters.

## Platform

LeetCode

## Difficulty

Medium

## Language

Java