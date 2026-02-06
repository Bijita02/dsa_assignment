## Introduction

Heap is a non-linear data structure based on a complete binary tree. It is mainly used to efficiently retrieve the minimum or maximum element from a collection of data. Heaps are widely used in priority queues, scheduling problems, and sorting algorithms such as heap sort.

There are two types of heaps:

**Min Heap**, where the smallest element is stored at the root.

**Max Heap**, where the largest element is stored at the root.

This program takes an unsorted array and constructs both Min Heap and Max Heap using heapify operations.

## Objective

The objective of this program is:

- To understand heap data structures.

- To construct Min Heap and Max Heap from an unsorted array.

- To implement heapify logic using C programming.

- To study how heap properties are maintained.

## Theory

A heap is a complete binary tree that satisfies the heap property.

**Min Heap**

In a Min Heap, the parent node is always smaller than or equal to its child nodes. Therefore, the minimum element is always at the root.

**Max Heap**

In a Max Heap, the parent node is always greater than or equal to its child nodes. Therefore, the maximum element is always at the root.

**Array Representation**

Heaps are commonly implemented using arrays.

For an element at index i:

- Parent index = (i - 1) / 2

- Left child index = 2i + 1

- Right child index = 2i + 2