# Checking Balanced Parentheses Using Stack in C

## Introduction
This document describes a C program that checks whether a given mathematical expression contains a balanced number of parentheses. The program uses the **stack data structure** implemented using an array and follows the **LIFO(Last In First Out)** principle.
It is commonly used to solve problems involving nested structures, such as checking balanced parentheses.


## Objectives

To write a C program that checks whether a given expression has balanced parentheses using the stack data structure.

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

## Data Structure Used
**Stack Definition**
The stack is implemented using a character array.
```bash
#define MAX 100
char stack[MAX];
int top;
```
**Explanation**

- stack[MAX]
Stores opening brackets encountered in the expression.

- top
Stores the index of the topmost element of the stack.

- top = -1
Indicates that the stack is empty.

## Functions Implemented
1. **initStack()**

Purpose:
Initializes the stack.

Description:
Sets top to -1 to indicate an empty stack.
```bash
void initStack() {
    top = -1;
}
```
2. **push(char c)**

Purpose:
Pushes an opening bracket onto the stack.

Description:

Checks if the stack is not full.

Increments top and stores the character at that position.
```bash
void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}
```
3.**pop()**

Purpose:
Removes and returns the top element from the stack.

Description:

If the stack is empty, returns '\0'.

Otherwise, returns the top element and decrements top.
```bash
char pop() {
    if (top < 0) return '\0';
    return stack[top--];
}
```
4. **isMatching(char open, char close)**

Purpose:
Checks whether an opening bracket matches its corresponding closing bracket.

Description:
Returns 1 if the brackets match, otherwise returns 0.
```bash
int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}
```
5. **isBalanced(char *exp)**

Purpose:
Determines whether the given expression has balanced parentheses.

Description:

- Initializes the stack.

- Scans the expression character by character.

- Pushes opening brackets onto the stack.

- Pops and matches brackets when a closing bracket is found.

- Returns 1 if the expression is balanced, otherwise returns 0.
```bash
int isBalanced(char *exp) {
    initStack();
    for (int i = 0; exp[i] != '\0'; i++) {
        char c = exp[i];

        if (c == '(' || c == '{' || c == '[') {
            push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (top < 0) {
                return 0;
            }
            char popped = pop();
            if (!isMatching(popped, c)) {
                return 0;
            }
        }
    }
    return (top == -1);
}
```
## Organization of the main() function

The main() function is organized as follows:

- Declares predefined expressions to test.

- Calls the isBalanced() function for each expression.

- Displays whether each expression is balanced or not.
```bash
int main() {
    char expr1[] = "a + (b - c) * (d";
    char expr2[] = "m + [a - b * (c + d * {m)]";
    char expr3[] = "a + (b - c)";

    printf("%s -> %s\n", expr1,
           isBalanced(expr1) ? "Balanced" : "Not Balanced");
    printf("%s -> %s\n", expr2,
           isBalanced(expr2) ? "Balanced" : "Not Balanced");
    printf("%s -> %s\n", expr3,
           isBalanced(expr3) ? "Balanced" : "Not Balanced");

    return 0;
}
```

## Sample Output
```bash
a + (b - c) * (d -> Not Balanced
m + [a - b * (c + d * {m)] -> Not Balanced
a + (b - c) -> Balanced
```
## Conclusion

The program successfully checks whether a mathematical expression has balanced parentheses using a stack.
By following the LIFO principle, it accurately detects:

- Missing brackets

- Extra brackets

- Mismatched brackets

This approach is efficient, simple, and demonstrates effective use of the stack data structure in C.