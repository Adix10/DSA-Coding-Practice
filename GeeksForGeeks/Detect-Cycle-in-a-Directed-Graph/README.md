# Detect Cycle in a Directed Graph

## Problem Statement
Given a directed graph represented by an adjacency list, check whether the graph contains a cycle. The graph may have multiple connected components.

## Approach: DFS (Depth First Search)
1. Create two arrays: visited and path.
2. Traverse all vertices to handle disconnected components.
3. Start DFS from every unvisited vertex.
4. Mark the current vertex as visited and add it to the current DFS path.
5. Check all adjacent vertices:
   - If the neighbour is unvisited, perform DFS on it.
   - If the neighbour is already present in the current DFS path, a cycle exists.
6. After checking all neighbours, remove the current vertex from the DFS path.
7. If no cycle is found, return false.

## Example

**Input:**
```text
adj = [[1], [2], [0, 3], []]
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
- E = Number of directed edges

## Algorithm
Depth First Search (DFS) with Recursion Stack.