#include <stdio.h>

int main()
{
    int x = 8;

    // Using Comma as operator
    int y = (x++, ++x, x++, ++x, x++, ++x);

    printf("%d", y);
    return 0;
}
