# Reverse Traversal of Singly Linked List Using Recursion in C

## Introduction

A singly linked list is a dynamic data structure where each node contains data and a pointer to the next node. Since there is no pointer to the previous node, reverse traversal is not directly possible. This program uses recursion to display the elements of a singly linked list in reverse order by printing the data while returning from recursive function calls.

## Objective

To write a C program that:

1. Creates a singly linked list

2. Inserts nodes at the end of the list

3. Displays the elements of the list in reverse order using recursion

## Theory

A Singly Linked List is a dynamic data structure where each node contains:

- Data

- A pointer to the next node

In a singly linked list, reverse traversal is not directly possible because there is no pointer to the previous node.
To overcome this limitation, recursion can be used.

**Concept of Reverse Traversal Using Recursion**

- The function recursively calls itself until it reaches the last node

- Once the base condition (NULL) is reached, the function starts returning

- While returning from recursive calls, it prints the data

- This results in elements being displayed in reverse order

## Algorithm
Algorithm to Insert Node at End

1. Create a new node

2. Assign data to the new node

3. Set **next** to **NULL**

4. If the list is empty, return new node as head

5. Otherwise, traverse to the last node

6. Link the new node to the last node

## Algorithm for Reverse Traversal Using Recursion

1. If the current node is **NULL**, return

2. Call the function recursively for the next node

3. Print the current node’s data

## Structure Definition
```bash
struct Node {
    int data;
    struct Node *next;
};
```

## Functions Used
1. ### insertEnd()

**Purpose:**
Inserts a new node at the end of the linked list.

**Logic:**
- Allocate memory for a new node using malloc()

- Assign data to the new node

- Set the next pointer to NULL

- If the list is empty, return the new node as the head

- Otherwise, traverse to the last node and link the new node

```bash
struct Node* insertEnd(struct Node *head, int value);
```

2. ### reverseTraversal()

**Purpose:**
Displays the elements of the linked list in reverse order using recursion.

**Logic:**

- If the current node is **NULL**, return

- Recursively call the function for the next node

- Print the current node's data while returning from recursion

```bash
void reverseTraversal(struct Node *head);
```

## Description of main() Function

- Initialize the head pointer to NULL

- Read the number of nodes from the user

- Read data values and insert them at the end of the list

- Call **reverseTraversal()** to display the list in reverse order

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

- No extra memory is required for storing the reversed list

- Simple and elegant solution using recursion

- Maintains original list structure

## Limitation

- Uses recursion, which may cause stack overflow for very large linked lists

## Result

Thus, the C program successfully performs reverse traversal of a singly linked list using recursion.
