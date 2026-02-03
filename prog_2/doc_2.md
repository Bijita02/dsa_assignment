## Infix to Postfix Expression Conversion and Evaluation Using Stack

## Introduction
This document describes a C program that converts an infix expression into a postfix expression and evaluates the postfix expression using stack data structures.

## Objective
To implement stack operations for converting infix expressions to postfix form and evaluating the postfix expression.

## Tools & Technologies Used
• **Programming Language: C**
• **Compiler: GCC / Turbo C**
• **Libraries: stdio.h, ctype.h, math.h**

## Theory
An infix expression places operators between operands (e.g., A+B). A postfix expression places operators after operands (e.g., AB+). Stacks are used to temporarily store operators and operands during conversion and evaluation.

## Algorithm
Step 1: Read the infix expression.
Step 2: Convert infix to postfix using operator precedence.
Step 3: Scan postfix expression.
Step 4: Push operands onto stack.
Step 5: Pop operands when operator is found and apply operation.
Step 6: Display final result.

**Input**
```bash
Infix Expression: 3+5*2
```

Step 1: Infix to Postfix Conversion
|**Symbol Scanned**| |**Stack (Operators)**| |**Postfix Expression**|
|3                 | |—	                   | |       3              | 
|+	               | |+	                   | |       3              |
|5	               | |+	                   | |      35              |
|*                 | |+ *	               | |      35              | 
|2	               | |+ *	               | |      352             |
|End               | |—	                   | |      352*+           |

Postfix Expression:
```bash
352*+
```

Step 2: Postfix Evaluation
|**Symbol**| |**Stack (Values)**| |**Operation**|
|3         | |3                 | |Push 3       | 
|5	       | |3,5	            | |Push 5       |
|2	       | |3,5,2             | |Push 2       |
|*         | |3,10              | |5x2          | 
|+	       | |13	            | |3+10         |

## Output
```bash
Postfix Expression: 352*+
Evaluation Result: 13
```

## Result

The given infix expression is successfully converted into postfix form and evaluated correctly using stack operations.

## Conclusion

The program efficiently demonstrates the use of stacks for expression conversion and evaluation, following operator precedence rules.




