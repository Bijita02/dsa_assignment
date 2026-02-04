#include <stdio.h>
#include <string.h>

#define MAX 100
char stack[MAX];
int top;

void initStack() {
    top = -1;
}

void push(char c) 
{
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

char pop()
{
    if (top < 0) return '\0';
    return stack[top--];
}

int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int isBalanced(char *exp) 
{
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
