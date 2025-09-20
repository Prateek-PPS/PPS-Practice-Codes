#include <stdio.h>

int main() {
    int n, count = 0;
    int a = 0, b = 1, next;

    // Ask the user to input the number of Fibonacci terms
    printf("Enter the number of terms in Fibonacci sequence: ");
    scanf("%d", &n);

    // Exceptional case
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Sequence up to %d terms:\n", n);

    while (count < n) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
        count++;
    }

    printf("\n");
    return 0;
}
