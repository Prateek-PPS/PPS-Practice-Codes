#include <stdio.h>

int main()
{
    int a, b;

    // Using Comma as operator
    b = (a=100, a+50);
    printf("%d", b);
    return 0;
}
