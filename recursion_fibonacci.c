#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0) return 0;    // Base case
    if (n == 1) return 1;    // Base case
    return fibonacci(n-1) + fibonacci(n-2);  // Recursive case
}
int main() {
    int n = 6, i;
    printf("Fibonacci Series: ");
    for( i=0; i<n; i++)
        printf("%d ", fibonacci(i));
    return 0;
}
