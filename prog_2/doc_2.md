## Infix to Postfix Expression Conversion and Evaluation Using Stack

## Introduction
This document describes a C program that converts an infix expression into a postfix expression and then evaluates the postfix expression using stack data structures. The program demonstrates the use of stacks for handling operators and operands based on operator precedence rules.

## Objective
To implement stack operations for:

- Converting infix expressions to postfix form 

- Evaluating the postfix expression using stack operations

## Tools & Technologies Used

• **Programming Language: C**

• **Compiler: GCC / Turbo C**

• Header Files Used:
- stdio.h-for input/output operations
- ctype.h-for checking digits
- math.h-for power operation

## Theory
An infix expression places operators between operands (e.g., 3+5). 
A postfix expression places operators after operands (e.g., 35+). 

Stacks are used because they follow the LIFO (Last In First Out) principle:

- An operator stack is used during infix to postfix conversion.

- A value stack is used during postfix evaluation.

## Algorithm
**Step 1: Read the infix expression**

- Accept an infix expression containing single-digit operands and operators.

**Step 2: Infix to Postfix Conversion**

1. Initialize an empty operator stack.

2. Scan the infix expression character by character.

3. If the character is a digit, add it to the postfix expression.

4. If the character is (, push it onto the operator stack.

5. If the character is ), pop operators from the stack until ( is found.

6. If the character is an operator:

     - Pop operators from the stack while they have higher or equal precedence.

     - Push the current operator onto the stack.

7. After scanning the expression, pop all remaining operators to postfix.

**Step 3: Postfix Evaluation**

1. Initialize an empty value stack.

2. Scan the postfix expression.

3. If the character is a digit, push it onto the value stack.

4. If the character is an operator:

     - Pop two operands from the value stack.

     - Apply the operator.

     - Push the result back onto the stack.

5. The final value in the stack is the result.

**Input**
```bash
Infix Expression: 3+5*2
```

## Infix to Postfix Conversion

|**Symbol Scanned** |**Stack (Operators)** |**Postfix Expression** |
|-------------------|----------------------|-----------------------|
|3    |—	  |3    |
|+	  |+	  |3    |
|5	  |+	  |35   |
|*    |+ *	|35   | 
|2	  |+ *	|352  |
|End  |—	  |352*+|

**Postfix Expression:**
```bash
352*+
```

## Postfix Evaluation

|**Symbol** |**Stack (Values)** |**Operation** |
|-----------|-------------------|--------------|
|3 |3     |Push 3 | 
|5 |3,5	  |Push 5 |
|2 |3,5,2 |Push 2 |
|* |3,10  |5x2    | 
|+ |13	  |3+10   |

## Output
```bash
Postfix Expression: 352*+
Evaluation Result: 13
```

## Result

The given infix expression is successfully converted into postfix form and evaluated correctly using stack operations.

## Conclusion

This program efficiently demonstrates the use of two stacks for expression conversion and evaluation. It correctly follows operator precedence rules and highlights the importance of stack data structures in expression processing.
