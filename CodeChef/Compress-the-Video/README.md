# Compress the Video

## Problem

Chef can remove a frame if its value is equal to one of its neighbors.

The goal is to find the minimum number of frames left after performing the operation any number of times.

## Approach

Each group of consecutive equal values can be compressed into one frame.

For example:

```text
[2, 1, 2, 2] → [2, 1, 2]
```

So, count the number of groups of consecutive equal values.

## Complexity

Time: O(n)  
Space: O(n)

## Language

Python