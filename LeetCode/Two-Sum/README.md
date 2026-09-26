# Two Sum

**LeetCode #1 — Easy**

🔗 [Problem Link](https://leetcode.com/problems/two-sum/)

## Problem

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

Each input has exactly one solution, and the same element cannot be used twice.

## Approach

### Brute Force

The solution uses two nested loops to check every possible pair of elements.

- The first loop selects an element.
- The second loop checks the elements after it.
- If `nums[i] + nums[j] == target`, their indices are returned.
- Since each element cannot be used twice, the second loop starts from `i + 1`.

## Example

**Input:**
```text
nums = [2, 7, 11, 15]
target = 9
```

**Output:**
```text
[0, 1]
```

**Explanation:**
```text
nums[0] + nums[1] = 2 + 7 = 9
```

## Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

## Language

Java

## Solution

```java
class Solution {

    public int[] twoSum(int[] nums, int target) {

        for (int i = 0; i < nums.length; i++) {

            for (int j = i + 1; j < nums.length; j++) {

                if (nums[i] + nums[j] == target) {

                    return new int[]{i, j};

                }
            }
        }

        return new int[]{};
    }
}
```
