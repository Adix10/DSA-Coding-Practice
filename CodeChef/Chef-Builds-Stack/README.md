# Chef Builds Stack

## Problem

Implement a stack using only two queues.

The stack must follow the Last-In-First-Out (LIFO) principle and support push, pop, top, and empty operations.

## Approach

Two queues are used: q1 and q2.

During push, the new element is added to q2 first. Then all elements from q1 are moved to q2. Finally, q1 and q2 are swapped.

This keeps the newest element at the front of q1, allowing pop and top operations to work like a normal stack.

## Operations

push(x): Adds x to the top of the stack.

pop(): Removes and returns the top element.

top(): Returns the top element without removing it.

empty(): Returns true if the stack is empty, otherwise false.

## Complexity

Push: O(n)

Pop: O(1)

Top: O(1)

Empty: O(1)

## Platform

CodeChef