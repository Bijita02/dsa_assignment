# Sorting Algorithms Performance Analysis

## 1. Introduction

Sorting is a basic and important concept in computer science. It means arranging elements of an array in a particular order, usually ascending order. Sorting makes data easier to understand and helps improve the efficiency of searching and processing data.

In this project, four sorting algorithms—Bubble Sort, Selection Sort, Insertion Sort, and Merge Sort—are implemented using the C programming language. The program also counts the number of comparisons and swaps to compare the performance of these algorithms.

## 2. Objective

The objectives of this project are:

* To study different sorting algorithms.
* To implement Bubble Sort, Selection Sort, Insertion Sort, and Merge Sort in C.
* To compare the algorithms based on the number of comparisons and swaps.
* To understand the efficiency of each sorting technique.

## 3. Theory

### 3.1 Bubble Sort

Bubble Sort is a simple sorting algorithm. It compares adjacent elements and swaps them if they are in the wrong order. This process is repeated until the array becomes sorted.

**Time Complexity:**

* Best Case: O(n)
* Average Case: O(n²)
* Worst Case: O(n²)

### 3.2 Selection Sort

Selection Sort works by finding the smallest element from the unsorted part of the array and placing it at the correct position in each pass.

**Time Complexity:**

* Best Case: O(n²)
* Average Case: O(n²)
* Worst Case: O(n²)

### 3.3 Insertion Sort

Insertion Sort sorts the array by taking one element at a time and inserting it into its correct position in the already sorted part of the array.

**Time Complexity:**

* Best Case: O(n)
* Average Case: O(n²)
* Worst Case: O(n²)

### 3.4 Merge Sort

Merge Sort is a divide-and-conquer algorithm. It divides the array into smaller parts, sorts them, and then merges them back into a sorted array.

**Time Complexity:**

* Best Case: O(n log n)
* Average Case: O(n log n)
* Worst Case: O(n log n)

## 4. Functions Description

### bubbleSort()

Sorts the array using Bubble Sort and counts the number of comparisons and swaps.

### selectionSort()

Sorts the array using Selection Sort and counts comparisons and swaps.

### insertionSort()

Sorts the array using Insertion Sort and counts comparisons and shifts.

### mergeSort()

Recursively divides the array and sorts it using Merge Sort.

### merge()

Merges two sorted subarrays into one sorted array and counts comparisons.

### printArray()

Displays the elements of the array.

### main()

Accepts user input, generates random numbers, allows the user to select a sorting method, and displays the results.

## 5. Algorithm

1. Start the program.
2. Enter the number of elements.
3. Generate random elements in the array.
4. Display the original array.
5. Choose a sorting algorithm from the menu.
6. Apply the selected sorting algorithm.
7. Display the sorted array.
8. Display total comparisons and swaps.
9. Stop the program.

## 6. Implementation Details

* Random numbers are generated using the `rand()` function.
* Global variables are used to count comparisons and swaps.
* Merge Sort does not use swaps, so only comparisons are counted.
* The program is menu-driven and easy to use.

## 7. Sample Output
```bash
### Input:
Enter number of elements: 4

Original Array:
521 891 843 506

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter choice: 1

### Output
**Sorted Array:**
506 521 843 891

Total Comparisons: 6
Total Swaps: 4
```

## 8. Conclusion

This project explains how different sorting algorithms work. Simple algorithms like Bubble Sort, Selection Sort, and Insertion Sort are easy to understand but slow for large inputs. Merge Sort is faster and more efficient for large data.

The comparison of swaps and comparisons helps us understand the performance of each algorithm. This project improves understanding of sorting techniques and their applications.

