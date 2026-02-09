## Introduction

In graph theory, finding the shortest path between vertices is a fundamental problem with applications in networking, transportation, and routing systems. Dijkstra’s algorithm is a greedy algorithm used to determine the shortest path from a single source vertex to all other vertices in a weighted graph with non-negative edge weights.

This program implements Dijkstra’s algorithm using an adjacency matrix to compute the minimum distance from a source node to all other nodes in a graph.

## Objective

The objective of this program is to:

- Implement Dijkstra’s algorithm in C

- Find the shortest path from a given source vertex to all other vertices in a weighted graph

- Display the minimum distance from the source to each vertex

## Theory

Dijkstra’s algorithm works by maintaining a set of vertices whose shortest distance from the source is already known. Initially, the distance to the source vertex is set to zero, and all other distances are set to infinity. At each step, the algorithm selects the unvisited vertex with the smallest distance, marks it as visited, and updates the distances of its adjacent vertices.

The process continues until all vertices have been visited. The algorithm assumes that all edge weights are non-negative.

## Function Definitions (Brief Explanation)
1. **minDistance()**
```bash
int minDistance(int dist[], int visited[], int n)
```

**Description:**
This function finds the unvisited vertex with the minimum distance value from the source.

**Parameters:**

- dist[] – Array storing the shortest distance from the source to each vertex

- visited[] – Array to track whether a vertex has been visited

- n – Number of vertices

**Return Value:**

Returns the index of the vertex with the smallest distance that is not yet visited.

2. dijkstra()
```bash
void dijkstra(int graph[MAX][MAX], int n, int src)
```

Description:
This function implements Dijkstra’s algorithm to compute the shortest path from the source vertex to all other vertices in the graph.

Parameters:

graph[MAX][MAX] – Adjacency matrix representing the weighted graph

n – Number of vertices

src – Source vertex

Working:

Initializes distance and visited arrays

Repeatedly selects the nearest unvisited vertex

Updates the distances of adjacent vertices

Displays the final shortest distances

Return Value:

This function does not return any value.

3. main()
```bash
int main()
```

Description:
This is the main function that controls the execution of the program.

Working:

Accepts user input for number of vertices

Reads the adjacency matrix

Reads the source vertex

Calls the dijkstra() function

Return Value:

Returns 0 indicating successful program execution.