# Chef Builds Queue Using Stacks

## Problem

Implement a queue using only two stacks.

The queue must follow the First-In-First-Out (FIFO) principle and support push, pop, peek, and empty operations.

## Approach

Two stacks are used: `s1` and `s2`.

New elements are pushed into `s1`.

When `s2` is empty, all elements from `s1` are moved to `s2`. This reverses their order and puts the oldest element at the top of `s2`.

The front element can then be removed or accessed directly from `s2`.

## Operations

`pushElement(x)`: Adds x to the back of the queue.

`popElement()`: Removes and returns the front element.

`peekElement()`: Returns the front element without removing it.

`isEmptyResult()`: Returns true if the queue is empty, otherwise false.

## Complexity

Push: O(1)

Pop: Amortized O(1)

Peek: Amortized O(1)

Empty: O(1)

## Example

Input:
```text
push 10
push 20
push 30
pop
peek
```

Output:
```text
None
None
None
10
20
```

## Platform

CodeChef

## Language

Python 3