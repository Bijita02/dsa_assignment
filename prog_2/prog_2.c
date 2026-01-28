#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

char stackOp[MAX];
int topOp = -1;

int stackVal[MAX];
int topVal = -1;

void pushOp(char x) {
    stackOp[++topOp] = x;
}

char popOp() {
    return stackOp[topOp--];
}

char peekOp() {
    return stackOp[topOp];
}

void pushVal(int x) {
    stackVal[++topVal] = x;
}

int popVal() {
    return stackVal[topVal--];
}

int precedence(char x) {
    if (x == '^') return 3;
    if (x == '*' || x == '/') return 2;
    if (x == '+' || x == '-') return 1;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, k = 0;
    char ch;

    while ((ch = infix[i++]) != '\0') {
        if (isdigit(ch)) {
            postfix[k++] = ch;
        }
        else if (ch == '(') {
            pushOp(ch);
        }
        else if (ch == ')') {
            while (topOp != -1 && peekOp() != '(')
                postfix[k++] = popOp();
            popOp();
        }
        else 
        {
            while (topOp != -1 && precedence(peekOp()) >= precedence(ch))
                postfix[k++] = popOp();
            pushOp(ch);
        }
    }

    while (topOp != -1)
        postfix[k++] = popOp();

    postfix[k] = '\0';
}

int evaluatePostfix(char postfix[]) {
    int i = 0;
    char ch;

    while ((ch = postfix[i++]) != '\0') {
        if (isdigit(ch)) {
            pushVal(ch - '0');
        }
        else {
            int b = popVal();
            int a = popVal();
            switch (ch) {
                case '+': pushVal(a + b); break;
                case '-': pushVal(a - b); break;
                case '*': pushVal(a * b); break;
                case '/': pushVal(a / b); break;
                case '^': pushVal((int)pow(a, b)); break;
            }
        }
    }
    return popVal();
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix Expression: %s\n", postfix);
    printf("Evaluation Result: %d\n", evaluatePostfix(postfix));

    return 0;
}
