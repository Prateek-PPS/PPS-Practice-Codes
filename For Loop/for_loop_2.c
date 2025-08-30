#include <stdio.h>
int main() {
    int n =10, i, j;
    for (i = 1, j = n; i <= n && j >= 1; i++, j--)
    printf("i = %d, j = %d\n", i, j);
    return 0;
}
