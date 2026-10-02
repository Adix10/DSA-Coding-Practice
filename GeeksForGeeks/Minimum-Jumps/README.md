# Minimum Jumps

## Problem

Given an array `arr[]` of non-negative integers, each element represents the maximum number of steps that can be jumped forward from that position.

Find the minimum number of jumps required to reach the last position of the array.

If the last position cannot be reached, return `-1`.

## Approach

Use a greedy approach.

- `farthest` stores the farthest index that can currently be reached.
- `end` stores the end of the current jump range.
- When we reach `end`, we make one jump and update the range using `farthest`.
- If we cannot move forward, return `-1`.
- If we reach the last index, return the number of jumps.

## Complexity

- Time Complexity: `O(N)`
- Space Complexity: `O(1)`

## Solution

```csharp
public class Solution {
    public int minJumps(int[] arr) {
        int n = arr.Length;

        if (n <= 1)
            return 0;

        if (arr[0] == 0)
            return -1;

        int jumps = 0;
        int end = 0;
        int farthest = 0;

        for (int i = 0; i < n - 1; i++) {
            farthest = Math.Max(farthest, i + arr[i]);

            if (i == end) {
                jumps++;
                end = farthest;

                if (end >= n - 1)
                    return jumps;

                if (end == i)
                    return -1;
            }
        }

        return -1;
    }
}
```