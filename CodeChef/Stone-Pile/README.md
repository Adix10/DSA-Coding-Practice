# Stone Pile

## Problem

Aman and Akshat take alternate turns on a pile of stones. Aman moves one stone to the bottom and removes the next stone. Akshat moves two stones to the bottom and removes the next stone.

The process continues until only one stone remains.

Find the person making the last move and the value of the remaining stone.

## Approach

- Use a deque to store the stones.
- Aman rotates the deque by 1 position and removes the top stone.
- Akshat rotates the deque by 2 positions and removes the top stone.
- Continue until only one stone remains.
- Print the person making the last move and the remaining stone.

## Complexity

Time: O(N)

Space: O(N)

## Language

Python