# Majority Element

## Problem Statement
Given an array `arr[]`, find the element that appears strictly more than `arr.size() / 2` times. If no such element exists, return `-1`.

## Approach
Use the Boyer–Moore Voting Algorithm to find a candidate for the majority element. Increase the count when the current element matches the candidate; otherwise, decrease it. When the count reaches zero, select a new candidate.

Traverse the array again to verify whether the candidate appears more than `arr.size() / 2` times. Return the candidate if it does; otherwise, return `-1`.

## Example
Input: `arr[] = [1, 1, 2, 1, 3, 5, 1]`

Output: `1`

Explanation: The element `1` appears 4 times, which is more than `7 / 2`.

## Complexity
- Time Complexity: `O(n)`
- Auxiliary Space: `O(1)`