## Implementation of Doubly Linked List Using Structure in C

## Introduction

A doubly linked list is a dynamic data structure in which each node contains data and two pointers: one pointing to the previous node and the other pointing to the next node. Unlike a singly linked list, it allows traversal in both forward and backward directions. This program demonstrates the implementation of a doubly linked list in C and performs insertion, deletion, and display operations.

## Objective
To implement a Doubly Linked List using structures in C and to perform the following operations:

1. Insert a node after a given node
2. Delete a given node
3. Display the elements of the list

## Theory
A Doubly Linked List is a dynamic data structure where each node consists of:

- Data
- A pointer to the previous node
- A pointer to the next node

Unlike a singly linked list, traversal is possible in both forward and backward directions.

## Advantages

- Easy traversal in both forward and backward directions
- Efficient insertion and deletion operations
- No need to traverse from the beginning while deleting a node

## Algorithm
Algorithm: Insert After a Given Node
1. Check if the previous node is NULL

2. Create a new node

3. Assign data to the new node

4. Set new node’s **next** to previous node’s **next**

5. Set new node’s **prev** to previous node

6. Update pointers of adjacent nodes

## Algorithm: Delete a Given Node

1. Check if list or node is NULL

2. If node is head, update head pointer

3. Update **next** pointer of previous node

4. Update **prev** pointer of next node

5. Free the deleted node

## Node Structure
```bash
prev | data | next
```

**Structure Definition**
```bash
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
```
## Functions Used
1. ### insertAfter()

**Purpose:**
Inserts a new node after a given node.

**Logic:**
- Create a new node
- Set its data
- Adjust next and prev pointers accordingly

```bash
void insertAfter(struct Node *prevNode, int newData) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = newData;
    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    if (prevNode->next != NULL) {
        prevNode->next->prev = newNode;
    }

    prevNode->next = newNode;
}
```

2. ### deleteNode()

**Purpose:**
Deletes a specified node from the doubly linked list.

**Logic:**

- Update the previous node’s next pointer
- Update the next node’s prev pointer
- Free the memory of the deleted node

```bash
void deleteNode(struct Node **head, struct Node *delNode) {
    if (*head == NULL || delNode == NULL) {
        return;
    }

    if (*head == delNode) {
        *head = delNode->next;
    }

    if (delNode->next != NULL) {
        delNode->next->prev = delNode->prev;
    }

    if (delNode->prev != NULL) {
        delNode->prev->next = delNode->next;
    }

    free(delNode);
}
```

3. ### display()

**Purpose:**
Displays the elements of the doubly linked list from beginning to end.

```bash
void display(struct Node *head) {
    struct Node *temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
```

## Description of main() Function

- Create three nodes and initialize the doubly linked list

- Display the initial list

- Insert a new node after the second node

- Display the updated list

- Delete the second node

- Display the final list

## Output
```bash
Doubly Linked List: 10 20 30
Doubly Linked List: 10 20 25 30
Doubly Linked List: 10 25 30
```
## Result

Thus, the C program successfully implements a Doubly Linked List and performs insertion, deletion, and display operations.

## Conclusion

The program demonstrates the efficient use of a doubly linked list for dynamic data storage. By maintaining pointers to both previous and next nodes, insertion and deletion operations are performed efficiently without unnecessary traversal.
