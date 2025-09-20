#include <stdio.h>
// Recursive function to calculate power
int power(int base, int exp)
{
    if (0 == exp)   // base case
        return 1;
    else
        return base * power(base, exp - 1); // recursive call
}

int main()
{
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}
