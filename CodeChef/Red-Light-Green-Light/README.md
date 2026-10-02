# Red Light, Green Light

## Problem

Gi-Hun and Ali have the same height `K`. There are `N` players standing between them, with heights `H[i]`.

Since Gi-Hun and Ali have the same height, their line of sight is horizontal.

A player blocks the line of sight only if their height is **greater than `K`**.

Find the minimum number of players that need to be shot so that Ali becomes visible.

## Approach

- Read the height `K` of Gi-Hun and Ali.
- Check the height of every player between them.
- If `H[i] > K`, that player blocks the line of sight.
- Count all such players.
- Print the count.

Players with height equal to `K` do not block the line of sight.

## Complexity

- Time Complexity: `O(N)`
- Space Complexity: `O(1)`
