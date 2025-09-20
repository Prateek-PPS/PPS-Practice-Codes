#include <stdio.h>

int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num <<= 1;
        printf("num = %d\n", num);
    }
    return count;
}
int main() {
    printf("----- Value of fun(20) = %d-----", func(20));
    return 0;
}
