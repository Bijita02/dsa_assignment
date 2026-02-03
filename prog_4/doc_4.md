## Implementation of Doubly Linked List Using Structure in C

## Objective
To implement a Doubly Linked List using structures in C and to perform the following operations:

1. Insert a node after a given node
2. Delete a given node
3. Display the elements of the list

## Software Requirements

- **Programming Language: C**
- **Compiler: GCC / Turbo C / Any standard C compiler**
- **Operating System: Windows / Linux**

## Theory
A Doubly Linked List is a dynamic data structure where each node contains:

- Data
- A pointer to the previous node
- A pointer to the next node

Unlike a singly linked list, traversal is possible in both forward and backward directions.

## Advantages

- Easy traversal in both directions
- Efficient insertion and deletion
- No need to traverse from the beginning while deleting a node

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
1. **insertAfter()**

**Purpose:**
Inserts a new node after a given node.

**Logic:**
- Create a new node
- Set its data
- Adjust next and prev pointers accordingly

2. **deleteNode()**

**Purpose:**
Deletes a specified node from the doubly linked list.

**Logic:**

- Update the previous node’s next pointer
- Update the next node’s prev pointer
- Free the memory of the deleted node

3. **display()**

**Purpose:**
Displays the elements of the doubly linked list from beginning to end.

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

## Output
```bash
Doubly Linked List: 10 20 30
Doubly Linked List: 10 20 25 30
Doubly Linked List: 10 25 30
```