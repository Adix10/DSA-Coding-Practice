# 0 - 1 Knapsack Problem

## Problem Statement
Given two arrays `val[]` and `wt[]`, representing the values and weights of items, and an integer `W` representing the knapsack capacity, find the maximum total value that can be obtained without exceeding the capacity.

Each item can either be included completely or excluded. Every item is available only once.

## Approach
Dynamic Programming is used to solve the problem.

A 1D DP array stores the maximum value for each capacity.

For each item, the capacity is traversed in reverse order to ensure that the item is used only once.

The transition is:

`dp[j] = max(dp[j], val[i] + dp[j - wt[i]])`

## Example
Input:
```text
W = 5
val = [10, 40, 30, 50]
wt = [5, 4, 2, 3]
```

Output:
```text
80
```

Explanation: Select the third and fourth items with a total weight of 5 and value of 80.

## Complexity Analysis
- Time Complexity: O(n × W)
- Space Complexity: O(W)
