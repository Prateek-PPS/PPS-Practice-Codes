#include <stdio.h>
int main() {
    int a = 5;
    double b = 4.5;
    double result = a * b; // int is promoted to double
    printf("Result = %0.4f", result);
    return 0;
}
