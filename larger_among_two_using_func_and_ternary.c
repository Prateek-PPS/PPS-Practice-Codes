#include <stdio.h>

// Function to return larger number using ternary operator
int larger(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = larger(num1, num2);
    printf("The larger number is: %d\n", result);
    return 0;
}
