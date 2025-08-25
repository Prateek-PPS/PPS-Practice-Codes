#include <stdio.h>
int main()
{
    int a;

    // Evaluated as (a = 1), 2, 3
    a = 4, 5, 8;
    printf("%d", a);
    return 0;
}
