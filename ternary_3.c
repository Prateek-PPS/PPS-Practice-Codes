#include <stdio.h>

int main() {
    int a, b;
    char op;
    int result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Notice space before %c to skip newline

    result = (op == '+') ? (a + b) :
             (op == '-') ? (a - b) :
             (op == '*') ? (a * b) :
             (op == '/') ? (b != 0 ? (a / b) : 0) : 0;

    // Message for division by zero or invalid operator
    (op == '/' && b == 0) ? printf("Error: Division by zero\n") :
    (op != '+' && op != '-' && op != '*' && op != '/') ? printf("Invalid operator\n") :
    printf("Result = %d\n", result);

    return 0;
}
