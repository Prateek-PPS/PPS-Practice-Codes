#include <stdio.h>
// Recursive function to calculate factorial
int factorial(int n)
{
    if (n == 0)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case
}
int main()
{
    int num = 6;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
