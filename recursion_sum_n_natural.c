#include <stdio.h>

int sum(int n)
{
    if (n == 0) return 0;  // Base case
    return n + sum(n - 1); // Recursive case
}

int main()
{
    int n = 10;
    printf("Sum of first %d natural numbers = %d\n", n, sum(n));
    return 0;
}
