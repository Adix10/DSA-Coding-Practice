# Chef Solves Asteroid Collision

## Problem Statement

Given a sequence of asteroids represented by integers, determine the final state after all possible collisions.

- Positive values represent asteroids moving right.
- Negative values represent asteroids moving left.
- The absolute value represents the size of an asteroid.
- Asteroids moving in the same direction never collide.
- When two asteroids collide, the smaller asteroid is destroyed.
- If both have the same size, both are destroyed.

Return the surviving asteroids in their left-to-right order.

## Approach

Use a **Stack** to simulate the collisions.

- Traverse the asteroid list from left to right.
- A collision occurs only when the top asteroid in the stack is positive and the current asteroid is negative.
- Compare their sizes:
  - If the stack asteroid is smaller, remove it and continue checking.
  - If both are equal, remove the stack asteroid and destroy the current asteroid.
  - If the stack asteroid is larger, destroy the current asteroid.
- If the current asteroid survives, push it into the stack.
- The remaining stack contains the final surviving asteroids.

## Example

### Example 1

```text
Input:
3
4 3 -5

Output:
-5
```

### Example 2

```text
Input:
5
10 -10 5 -5 20

Output:
20
```

### Example 3

```text
Input:
6
1 2 3 -4 -3 -2

Output:
-4 -3 -2
```

### Example 4

```text
Input:
7
8 9 -10 11 -12 13 -14

Output:
-10 -12 -14
```

## Complexity

- Time Complexity: `O(N)`
- Space Complexity: `O(N)`