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

## Function Definitions
1. ### minDistance()
```bash
int minDistance(int dist[], int visited[], int n)
```

**Description:**
This function finds the unvisited vertex with the minimum distance value from the source.

**Parameters:**

- ```dist[]```– Array storing the shortest distance from the source to each vertex

- ```visited[]``` – Array to track whether a vertex has been visited

- ```n``` – Number of vertices

**Return Value:**

Returns the index of the vertex with the smallest distance that is not yet visited.

2. ### dijkstra()
```bash
void dijkstra(int graph[MAX][MAX], int n, int src)
```

**Description:**
This function implements Dijkstra’s algorithm to compute the shortest path from the source vertex to all other vertices in the graph.

**Parameters:**

- ```graph[MAX][MAX]``` – Adjacency matrix representing the weighted graph

- ```n``` – Number of vertices

- ```src``` – Source vertex

**Working:**

- Initializes distance and visited arrays

- Repeatedly selects the nearest unvisited vertex

- Updates the distances of adjacent vertices

- Displays the final shortest distances

**Return Value:**

This function does not return any value.

3. ### main()
```bash
int main()
```

**Description:**
This is the main function that controls the execution of the program.

**Working:**

- Accepts user input for number of vertices

- Reads the adjacency matrix

- Reads the source vertex

- Calls the dijkstra() function

**Return Value:**

- Returns 0 indicating successful program execution.

## Algorithm

1. Start

2. Read the number of vertices n

3. Read the adjacency matrix of the graph

4. Read the source vertex

5. Initialize all distances as infinity and visited array as false

6. Set the distance of the source vertex to 0

7. Repeat the following steps n-1 times:

- Select the unvisited vertex with the minimum distance

- Mark the vertex as visited

- Update distances of adjacent vertices if a shorter path is found

8. Display the shortest distance from the source to all vertices

9. Stop
    
## Sample Input and Output
### Sample Input
```bash
Enter number of vertices: 5
Enter adjacency matrix (0 if no edge):
0 10 0 5 0
0 0 1 2 0
0 0 0 0 4
0 3 9 0 2
7 0 6 0 0
Enter source vertex: 0
```
### Sample Output
```bash
Vertex 	 Distance from Source
0 		 0
1 		 8
2 		 9
3 		 5
4 		 7
```
## Conclusion

Thus, Dijkstra’s algorithm was successfully implemented using an adjacency matrix. The program efficiently computes the shortest path from a source vertex to all other vertices in a weighted graph with non-negative edge weights. This algorithm is widely used in real-world applications such as routing and navigation systems.
