# Minimum Platforms

## Problem Statement
Given the arrival and departure times of trains on the same day, find the minimum number of railway platforms required so that no train has to wait. A platform cannot accommodate two trains at the same time.

## Approach
Sort the arrival and departure arrays separately. Use two pointers to track the next arrival and departure. If a train arrives before or at the earliest departure, increment the platform count and update the maximum. Otherwise, decrement the platform count and move to the next departure. Return the maximum number of platforms required.

## Example
**Input:**
`arr = [900, 940, 950, 1100, 1500, 1800]`

`dep = [910, 1200, 1120, 1130, 1900, 2000]`

**Output:** `3`

**Explanation:** At least three platforms are required when three trains overlap.

## Complexity Analysis
- **Time Complexity:** O(n log n)
- **Auxiliary Space:** O(1), excluding sorting implementation details.
