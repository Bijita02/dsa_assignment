# Min Heap and Max Heap Implementation

## 1. Introduction

Heap is a special tree-based data structure that satisfies the heap property. It is widely used in priority queues, heap sort, and scheduling algorithms. There are two main types of heaps: Min Heap and Max Heap.

In this program, Min Heap and Max Heap are implemented using arrays in the C programming language. The program takes user input, builds both heaps, and displays them.

## 2. Objective

The objectives of this program are:

* To understand the concept of heap data structures.
* To implement Min Heap and Max Heap using arrays.
* To learn heapify operations in C.
* To display Min Heap and Max Heap from the same input data.

## 3. Theory

### 3.1 Heap

A heap is a complete binary tree where each parent node follows a specific order with its child nodes.

* In a **Min Heap**, the value of the parent node is smaller than or equal to its children.
* In a **Max Heap**, the value of the parent node is greater than or equal to its children.

Heaps are commonly represented using arrays.


### 3.2 Min Heap

In a Min Heap, the smallest element is always present at the root of the tree. It is useful when we want quick access to the minimum value.


### 3.3 Max Heap

In a Max Heap, the largest element is always present at the root of the tree. It is useful when we want quick access to the maximum value.

## 4. Functions Description

### swap()

Swaps two integer values using pointers.

### minHeapify()

Ensures that the subtree rooted at a given index follows the Min Heap property.

### maxHeapify()

Ensures that the subtree rooted at a given index follows the Max Heap property.

### buildMinHeap()

Converts an array into a Min Heap by calling the minHeapify function.

### buildMaxHeap()

Converts an array into a Max Heap by calling the maxHeapify function.

### printArray()

Displays the elements of the array.

### main()

Accepts user input, creates Min Heap and Max Heap from the input array, and prints the results.

## 5. Algorithm

### Steps:

1. Start the program.
2. Enter the number of elements.
3. Enter the array elements.
4. Copy the array into two separate arrays.
5. Build Min Heap using buildMinHeap().
6. Build Max Heap using buildMaxHeap().
7. Display Min Heap.
8. Display Max Heap.
9. Stop the program.

## 6. Implementation Details

* Arrays are used to represent heaps.
* The heapify process starts from the last non-leaf node.
* Recursion is used in heapify functions.
* Indexing starts from 0.

## 7. Sample Output
```bash
Input:

* Number of elements: 6
* Elements: 20 15 8 10 5 7

Min Heap:
5 10 7 20 15 8

Max Heap:
20 15 8 10 5 7
```

## 8. Conclusion

This program successfully demonstrates the construction of Min Heap and Max Heap using arrays in C. Heaps are efficient data structures for managing priority-based operations. Understanding heapify operations helps in learning advanced algorithms like Heap Sort.
