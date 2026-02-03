## Checking Balanced Parentheses Using Stack in C

## Objective

To write a C program that checks whether a given expression has balanced parentheses using the stack data structure.

## Software Requirements

- Programming Language: C

- Compiler: GCC / Turbo C / Any standard C compiler

- Operating System: Windows / Linux

## Theory

A stack is a linear data structure that follows the LIFO (Last In First Out) principle.
It is commonly used to solve problems involving nested structures, such as checking balanced parentheses.

## Balanced Expression

An expression is said to be balanced if:

- Every opening bracket has a corresponding closing bracket

- Brackets are properly nested and ordered

Supported brackets:

( )

{ }

[ ]

Data Structures Used
Stack (Array Implementation)
```bash
#define MAX 100
char stack[MAX];
int top;
```


stack[] stores opening brackets

top indicates the top of the stack

Functions Used
1. initStack()

Purpose:
Initializes the stack by setting top to -1.

2. push()

Purpose:
Pushes an opening bracket onto the stack.

3. pop()

Purpose:
Removes and returns the top element from the stack.

4. isMatching()

Purpose:
Checks whether an opening bracket matches the corresponding closing bracket.

5. isBalanced()

**Purpose:**
Checks whether the given expression has balanced parentheses.

**Logic:**

- Push opening brackets onto the stack

- On encountering a closing bracket:

     - Pop from the stack

     - Check if it matches

- If stack is empty at the end, expression is balanced

## Algorithm
Algorithm to Check Balanced Parentheses

1. Initialize the stack

2. Scan the expression character by character

3. If an opening bracket is found, push it onto the stack

4. If a closing bracket is found:
- If stack is empty → Not Balanced
- Pop from stack and check for matching

5. After scanning the expression:
- If stack is empty → Balanced
- Else → Not Balanced

## Output
```bash
a + (b - c) * (d -> Not Balanced
m + [a - b * (c + d * {m)] -> Not Balanced
a + (b - c) -> Balanced
```