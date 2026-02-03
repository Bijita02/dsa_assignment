## Reverse Traversal of Singly Linked List Using Recursion in C

## Objective

To write a C program that:

1. Creates a singly linked list

2. Inserts nodes at the end of the list

3. Displays the elements of the list in reverse order using recursion

## Software Requirements

- **Programming Language: C**

- **Compiler: GCC / Turbo C / Any standard C compiler**

- **Operating System: Windows / Linux**

## Theory

A Singly Linked List is a dynamic data structure where each node contains:

- Data

- A pointer to the next node

In a singly linked list, reverse traversal is not directly possible because there is no pointer to the previous node.
To overcome this limitation, recursion can be used.

**Concept of Reverse Traversal Using Recursion**

- The function recursively calls itself until it reaches the last node

- While returning from recursive calls, it prints the data

- This results in elements being printed in reverse order

Structure Definition
```bash
struct Node {
    int data;
    struct Node *next;
};
```

## Functions Used
1. **insertEnd()**

**Purpose:**
Inserts a new node at the end of the linked list.

**Logic:**

- Allocate memory for a new node

- If the list is empty, make the new node the head

- Otherwise, traverse to the last node and link the new node

2. **reverseTraversal()**

**Purpose:**
Displays the elements of the linked list in reverse order using recursion.

**Logic:**

- If the current node is NULL, return

- Recursively call the function for the next node

- Print the data while returning from recursion

## Algorithm
Algorithm to Insert Node at End

1. Create a new node

2. Assign data to the new node

3. Set **next** to NULL

4. If the list is empty, return new node as head

5. Otherwise, traverse to the last node

6. Link the new node to the last node

## Algorithm for Reverse Traversal

1. If the current node is NULL, return

2. Call the function recursively for the next node

3. Print the current node’s data


## Sample Output
```bash
Enter number of nodes: 5
Enter data 1: 10
Enter data 2: 20
Enter data 3: 30
Enter data 4: 40
Enter data 5: 50
Reverse Traversal:
50 40 30 20 10
```
## Advantages

No extra memory is required for storing the reversed list

Simple and elegant solution using recursion

## Limitation

Uses recursion, which may cause stack overflow for very large lists

## Result

Thus, the C program successfully performs reverse traversal of a singly linked list using recursion.