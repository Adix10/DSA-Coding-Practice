# Detect Cycle in an Undirected Graph

## Problem Statement
Given an undirected graph represented by an adjacency list, check whether the graph contains a cycle. The graph may have multiple connected components.

## Approach: BFS (Breadth-First Search)
1. Create a visited array to track visited vertices.
2. Traverse all vertices to handle disconnected components.
3. Start BFS from every unvisited vertex.
4. Store each vertex along with its parent in a queue.
5. Visit all adjacent vertices:
   - If the neighbour is unvisited, mark it visited and push it into the queue.
   - If the neighbour is already visited and is not the parent, a cycle exists.
6. If no cycle is found, return false.

## Example

**Input:**
```text
adj = [[1, 2], [0, 2], [0, 1, 3], [2]]
```

**Output:**
```text
true
```

**Explanation:**
The graph contains a cycle: 0 -> 1 -> 2 -> 0.

## Complexity Analysis
- Time Complexity: O(V + E)
- Space Complexity: O(V)

Where:
- V = Number of vertices
- E = Number of edges

## Algorithm
Breadth-First Search (BFS) with Parent Tracking.