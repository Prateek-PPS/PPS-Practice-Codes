#include <stdio.h>
int func(int n)
{
    static int i = 1;
    if(n>=5)
        return n;
    n = n + i;
    i++;
    return func(n);
}
void main()
{
    int result = func(1);
    printf("Result = %d", result);
}


