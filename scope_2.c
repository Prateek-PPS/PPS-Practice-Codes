#include <stdio.h>
int x = 10; // global variable
int main()
{
    //int x = 20; // local variable shadows global
    printf("%d\n", x); // prints 20
    {
        int x = 30; // new scope inside block
        printf("%d\n", x); // prints 30
    }
    printf("%d\n", x); // prints 20 again
    return 0;
}
