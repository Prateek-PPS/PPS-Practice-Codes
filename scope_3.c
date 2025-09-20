#include <stdio.h>
int main()
{
    int x = 20, y = 30;
    {
        printf("x = %d, y = %d\n", x, y);
        {
            int y = 40;
            x++; y++;
            printf("x = %d, y = %d\n", x, y);
        }
        printf("x = %d, y = %d\n", x, y);
    }
    return 0;
}
