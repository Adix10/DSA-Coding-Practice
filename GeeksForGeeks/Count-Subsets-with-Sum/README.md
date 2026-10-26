# Count Subsets with Sum

## Problem Statement
Given an array of non-negative integers and a target sum, count the subsets whose elements add up to the target.

## Approach
Use dynamic programming to store the number of subsets for each possible sum. Initialize `dp[0] = 1` because the empty subset has sum zero. For each array element, update the DP array backward to count subsets without reusing elements.

## Example
Input: arr = [5, 2, 3, 10, 6, 8], target = 10

Output: 3

Explanation: The subsets are {5, 2, 3}, {2, 8}, and {10}.

## Complexity
Time Complexity: O(n × target)

Space Complexity: O(target)