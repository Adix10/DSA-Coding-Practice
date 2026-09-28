# Add Two Numbers

## Problem

Given two non-empty linked lists representing two non-negative integers, add the two numbers and return the sum as a linked list.

The digits are stored in reverse order, and each node contains a single digit.

## Approach

1. Create a dummy node to build the result linked list.
2. Initialize a carry variable to 0.
3. Traverse both linked lists while either list has nodes or a carry remains.
4. Add the current digits from both lists and the carry.
5. Store `sum % 10` in a new node.
6. Update carry using `sum / 10`.
7. Return `dummy.next` as the head of the result list.

## Example

Input:
```text
l1 = [2,4,3]
l2 = [5,6,4]
```

Output:
```text
[7,0,8]
```

Explanation:

342 + 465 = 807

## Complexity

Time Complexity: O(max(m, n))

Space Complexity: O(max(m, n)) for the result linked list.

## Platform

LeetCode

## Difficulty

Medium

## Language

Java