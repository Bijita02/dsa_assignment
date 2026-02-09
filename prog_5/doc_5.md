# Implementation of Undirected Graph Using Adjacency Matrix with BFS and DFS in C

## Introduction

A graph is a non-linear data structure consisting of vertices and edges. In an undirected graph, edges do not have direction, meaning the connection between vertices is bidirectional. One of the most common ways to represent a graph is using an adjacency matrix.
This program demonstrates the implementation of an undirected graph using an adjacency matrix and traverses the graph using Breadth First Search (BFS) and Depth First Search (DFS) techniques.

## Objective

To implement an undirected graph using an adjacency matrix and to traverse the graph using:

1. Breadth First Search (BFS)

2. Depth First Search (DFS)

## Software Requirements

- Programming Language: C

- Compiler: GCC / Turbo C / Any standard C compiler

- Operating System: Windows / Linux

## Theory

**Undirected Graph**

An undirected graph consists of vertices connected by edges where the edges have no direction. If there is an edge between vertex u and v, then u is connected to v and v is connected to u.

**Adjacency Matrix**

An adjacency matrix is a 2D array where:

- adjMatrix[i][j] = 1 → edge exists between vertex i and j

- adjMatrix[i][j] = 0 → no edge exists

## Graph Traversal Techniques

**Breadth First Search (BFS)**

- Traverses the graph level by level

- Uses a queue

- Visits all adjacent vertices before moving to the next level

**Depth First Search (DFS)**

- Traverses as deep as possible before backtracking

- Uses recursion or stack

- Visits one branch completely before moving to another

## Algorithm

**Algorithm: BFS Traversal**

1. Initialize visited array to zero

2. Insert the starting vertex into the queue

3. Mark the starting vertex as visited

4. Repeat until the queue is empty:

- Remove vertex from queue

- Visit all unvisited adjacent vertices

- Mark them visited and insert into queue

## Algorithm: DFS Traversal

1. Mark the current vertex as visited

2. Display the vertex

3. For each adjacent unvisited vertex:

- Recursively call DFS

## Example Graph

Vertices: 0, 1, 2, 3

Adjacency Matrix:
```bash
0 1 1 0
1 0 1 1
1 1 0 0
0 1 0 0
```

## Sample Input
```bash
Enter number of vertices: 4
Enter adjacency matrix:
0 1 1 0
1 0 1 1
1 1 0 0
0 1 0 0
Enter starting vertex: 0
```

## Sample Output

```bash
BFS Traversal: 0 1 2 3
DFS Traversal: 0 1 2 3
```

## Advantages

- Simple and easy graph representation

- Efficient edge lookup

- Suitable for dense graphs

## Limitations

- Requires more memory for sparse graphs

- Fixed size matrix

## Result

Thus, the undirected graph was successfully implemented using an adjacency matrix, and BFS and DFS traversals were performed correctly.

## Conclusion

The program demonstrates how graphs can be represented using adjacency matrices and traversed efficiently using BFS and DFS algorithms. These traversal techniques are fundamental in solving many real-world problems involving graphs.